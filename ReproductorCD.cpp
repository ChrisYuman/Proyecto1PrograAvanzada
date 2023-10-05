#include "ReproductorCD.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>

ReproductorCD::ReproductorCD() {}

void ReproductorCD::cargarRespaldosDesdeCarpeta(const std::string& carpeta) {
    // Limpia la lista de CDs existente si se selecciona esta opción nuevamente
    listaCds.clear();

    // Convierte la ruta de la carpeta a formato LPCWSTR
    std::wstring carpetaW = std::wstring(carpeta.begin(), carpeta.end());
    LPCWSTR carpetaLPCWSTR = carpetaW.c_str();

    // Define el patrón de búsqueda
    LPCWSTR patronBusqueda = L"/*.txt";

    // Combina la carpeta y el patrón de búsqueda en una cadena LPCWSTR
    std::wstring carpetaConPatron = carpetaW + L"\\*.txt";  // Asegúrate de agregar el patrón "*.txt" directamente
    LPCWSTR carpetaConPatronLPCWSTR = carpetaConPatron.c_str();

    // Utiliza la biblioteca <windows.h> para listar archivos en el directorio
    WIN32_FIND_DATA findFileData;
    HANDLE hFind = FindFirstFile(carpetaConPatronLPCWSTR, &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        DWORD dwError = GetLastError();
        if (dwError != ERROR_FILE_NOT_FOUND) {
            // Manejar errores de FindFirstFile
            std::cerr << "Error al buscar archivos en la carpeta: " << carpeta << std::endl;
        }
        return;
    }

    do {
        std::wstring nombreArchivoW = findFileData.cFileName;
        std::string nombreArchivo(nombreArchivoW.begin(), nombreArchivoW.end());
        std::string rutaCompleta = carpeta + "\\" + nombreArchivo;  // Usar '\\' para la ruta
        cargarCdDesdeArchivo(rutaCompleta);
    } while (FindNextFile(hFind, &findFileData) != 0);

    FindClose(hFind);
}

void ReproductorCD::cargarCdDesdeArchivo(const std::string& nombreArchivo) {
    // Abre el archivo .txt para lectura
    std::ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        return;
    }

    std::string nombreCd = nombreArchivo; // Nombre del CD extraído del nombre del archivo

    CD cd(nombreCd); // Crea un nuevo CD

    std::string linea;
    while (std::getline(archivo, linea)) {
        // Divide la línea en nombre, artista y duración utilizando '||' como separador
        std::string delimiter = "||";
        size_t pos = 0;
        std::string token;
        std::vector<std::string> tokens;  // Declaración del vector

        while ((pos = linea.find(delimiter)) != std::string::npos) {
            token = linea.substr(0, pos);
            tokens.push_back(token);
            linea.erase(0, pos + delimiter.length());
        }
        tokens.push_back(linea);  // Añade la última parte

        if (tokens.size() == 3) {
            Cancion cancion(tokens[0], tokens[1], tokens[2]);
            cd.agregarCancion(cancion);
        }
        else {
            std::cerr << "Formato incorrecto en una línea del archivo: " << nombreArchivo << std::endl;
        }
    }

    archivo.close();

    if (cd.getCantidadCanciones() > 0) {
        listaCds.push_back(cd); // Agrega el CD a la lista si tiene canciones válidas
    }
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
                << ", Duración: " << cancion.getDuracion() << std::endl;
        }
        std::cout << std::endl;
    }
}
