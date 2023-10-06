#include "Agregarcancion.h"
#include <iostream>

Agregarcancion::Agregarcancion() {
    // Constructor (si es necesario)
}

void Agregarcancion::ejecutarAgregarcancion(ReproductorCD* reproductor) {
    std::cout << "Agregar Canción\n" << std::endl;

    // Llamar al método de ReproductorCD para obtener la lista de CDs
    const std::vector<CD>& listaCds = reproductor->getListaCds();

    // Mostrar la lista de CDs al usuario
    std::cout << "Lista de CDs:" << std::endl;
    for (int i = 0; i < listaCds.size(); i++) {
        std::cout << i + 1 << ". " << listaCds[i].getNombre() << std::endl;
    }

    // Solicitar al usuario que elija un CD
    int opcionCd;
    std::cout << "Seleccione un CD por número: ";
    std::cin >> opcionCd;

    // Verificar si la opción es válida
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

        // Solicitar al usuario que elija una canción
        int opcionCancion;
        std::cout << "Seleccione una canción por número: ";
        std::cin >> opcionCancion;

        // Verificar si la opción de canción es válida
        if (opcionCancion >= 1 && opcionCancion <= listaCanciones.size()) {
            // Obtener la canción seleccionada por el usuario
            const Cancion& cancionSeleccionada = listaCanciones[opcionCancion - 1];

            // Agregar la canción seleccionada a la cola de reproducción (ajusta esto según tu implementación)
            // Ejemplo: reproductor->agregarCancionALaCola(cancionSeleccionada);

            std::cout << "Canción agregada a la cola de reproducción: " << cancionSeleccionada.getNombre() << std::endl;
        }
        else {
            std::cout << "Opción de canción no válida." << std::endl;
        }
    }
    else {
        std::cout << "Opción de CD no válida." << std::endl;
    }
}
