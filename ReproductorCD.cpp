#include "ReproductorCD.h" //Incluimos el .h
#include <iostream>
#include <fstream> // Esta libreria nos sirve para manipular archivos
#include <vector>
#include <string>
#include <windows.h> //Esta libreria nos sirve para usar funciones especificas de windows 
#include <unordered_set> // Esta libreria nos sirvio para detectar l�neas duplicadas

ReproductorCD::ReproductorCD() {}

const std::vector<CD>& ReproductorCD::getListaCds() const {
    return listaCds;
}

void ReproductorCD::cargarRespaldosDesdeCarpeta(const std::string& carpeta) {
    // Aca limpiamos la lista de CDs existente si se selecciona esta opci�n nuevamente

    listaCds.clear();

    // Aca convertimos la ruta de la carpeta a formato LPCWSTR

    std::wstring carpetaW = std::wstring(carpeta.begin(), carpeta.end());
    LPCWSTR carpetaLPCWSTR = carpetaW.c_str();

    // Aca definimos el patr�n de b�squeda

    LPCWSTR patronBusqueda = L"/*.txt";

    // Aca combinamos la carpeta y el patr�n de b�squeda en una cadena LPCWSTR

    std::wstring carpetaConPatron = carpetaW + L"\\*.txt";
    LPCWSTR carpetaConPatronLPCWSTR = carpetaConPatron.c_str();

    // Aca utilizamos la biblioteca <windows.h> para listar archivos en el directorio

    WIN32_FIND_DATA findFileData;
    HANDLE hFind = FindFirstFile(carpetaConPatronLPCWSTR, &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        DWORD dwError = GetLastError();
        if (dwError != ERROR_FILE_NOT_FOUND) {

            // Aca manejamos errores de FindFirstFile

            std::cerr << "Error al buscar archivos en la carpeta: " << carpeta << std::endl;
        }
        return;
    }

    do {
        std::wstring nombreArchivoW = findFileData.cFileName;
        std::string nombreArchivo(nombreArchivoW.begin(), nombreArchivoW.end());
        std::string rutaCompleta = carpeta + "\\" + nombreArchivo;

        // Aca abrimos el archivo .txt para lectura

        std::ifstream archivo(rutaCompleta);
        if (!archivo.is_open()) {
            std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
            continue; // Aca continuamos con el siguiente archivo
        }

        std::string nombreCd = nombreArchivo;
        CD cd(nombreCd);
        bool cdVacio = true; // Aca verificamos si el CD est� vac�o

        std::string linea;
        std::unordered_set<std::string> lineasDuplicadas; // Aca para detectar l�neas duplicadas

        while (std::getline(archivo, linea)) {

            // Aca verificamos si la l�nea est� duplicada

            if (lineasDuplicadas.find(linea) != lineasDuplicadas.end()) {
                std::cerr << "Error: L�nea duplicada en el archivo: " << nombreArchivo << std::endl;
                continue; // Continuar con la siguiente l�nea
            }

            // Aca agregamos la l�nea al conjunto de l�neas para verificar duplicados
            lineasDuplicadas.insert(linea);

            // Aca dividimos la l�nea en nombre, artista y duraci�n utilizando '||' como separador
            std::string delimiter = "||";
            size_t pos = 0;
            std::string token;
            std::vector<std::string> tokens;  // Aca hicimos la declaraci�n del vector

            while ((pos = linea.find(delimiter)) != std::string::npos) {
                token = linea.substr(0, pos);
                tokens.push_back(token);
                linea.erase(0, pos + delimiter.length());
            }
            tokens.push_back(linea);

            if (tokens.size() == 3) {
                Cancion cancion(tokens[0], tokens[1], tokens[2]);
                cd.agregarCancion(cancion);
                cdVacio = false; // El CD no est� vac�o
            }
            else {
                std::cerr << "Formato incorrecto en una l�nea del archivo: " << nombreArchivo << std::endl;
            }
        }

        archivo.close();

        if (!cdVacio) {
            listaCds.push_back(cd); // Aca agregamos el CD a la lista si no est� vac�o
        }
        else {
            std::cerr << "Advertencia: El CD en el archivo " << nombreArchivo << " est� vac�o." << std::endl;
        }
    } while (FindNextFile(hFind, &findFileData) != 0);

    FindClose(hFind);
}

void ReproductorCD::imprimirDiscos() const {
    std::cout << "Discos cargados:" << std::endl;
    for (const CD& cd : listaCds) {
        std::cout << "Nombre del CD: " << cd.getNombre() << std::endl;
        std::cout << "Cantidad de canciones: " << cd.getCantidadCanciones() << std::endl;
        std::cout << "Canciones:" << std::endl;
        for (const Cancion& cancion : cd.getCanciones()) {
            std::cout << " - Nombre: " << cancion.getNombre()
                << ", Artista: " << cancion.getArtista()
                << ", Duraci�n: " << cancion.getDuracion() << std::endl;
        }
        std::cout << std::endl;
    }
}
