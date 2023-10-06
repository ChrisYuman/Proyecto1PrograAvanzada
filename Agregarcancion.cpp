#include "Agregarcancion.h"
#include <iostream>

Agregarcancion::Agregarcancion() {
    // Constructor (si es necesario)
}

void Agregarcancion::ejecutarAgregarcancion(ReproductorCD* reproductor) {
    std::cout << "Agregar Canci�n\n" << std::endl;

    // Llamar al m�todo de ReproductorCD para obtener la lista de CDs
    const std::vector<CD>& listaCds = reproductor->getListaCds();

    // Mostrar la lista de CDs al usuario
    std::cout << "Lista de CDs:" << std::endl;
    for (int i = 0; i < listaCds.size(); i++) {
        std::cout << i + 1 << ". " << listaCds[i].getNombre() << std::endl;
    }

    // Solicitar al usuario que elija un CD
    int opcionCd;
    std::cout << "Seleccione un CD por n�mero: ";
    std::cin >> opcionCd;

    // Verificar si la opci�n es v�lida
    if (opcionCd >= 1 && opcionCd <= listaCds.size()) {
        // Obtener el CD seleccionado por el usuario
        const CD& cdSeleccionado = listaCds[opcionCd - 1];

        // Obtener la lista de canciones del CD seleccionado
        const std::vector<Cancion>& listaCanciones = cdSeleccionado.getCanciones();

        // Mostrar la lista de canciones del CD
        std::cout << "Lista de Canciones en " << cdSeleccionado.getNombre() << ":" << std::endl;
        for (int i = 0; i < listaCanciones.size(); i++) {
            std::cout << i + 1 << ". " << listaCanciones[i].getNombre() << std::endl;
        }

        // Solicitar al usuario que elija una canci�n
        int opcionCancion;
        std::cout << "Seleccione una canci�n por n�mero: ";
        std::cin >> opcionCancion;

        // Verificar si la opci�n de canci�n es v�lida
        if (opcionCancion >= 1 && opcionCancion <= listaCanciones.size()) {
            // Obtener la canci�n seleccionada por el usuario
            const Cancion& cancionSeleccionada = listaCanciones[opcionCancion - 1];

            // Agregar la canci�n seleccionada a la cola de reproducci�n (ajusta esto seg�n tu implementaci�n)
            // Ejemplo: reproductor->agregarCancionALaCola(cancionSeleccionada);

            std::cout << "Canci�n agregada a la cola de reproducci�n: " << cancionSeleccionada.getNombre() << std::endl;
        }
        else {
            std::cout << "Opci�n de canci�n no v�lida." << std::endl;
        }
    }
    else {
        std::cout << "Opci�n de CD no v�lida." << std::endl;
    }
}
