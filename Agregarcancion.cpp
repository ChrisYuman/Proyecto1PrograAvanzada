#include "Agregarcancion.h"
#include <iostream>

Agregarcancion::Agregarcancion(ReproductorCD& reproductor) : reproductor(reproductor) {}

void Agregarcancion::ejecutar() {
    // Obtener la cantidad de CDs en el reproductor
    int cantidadCds = reproductor.getCantidadCds();

    if (cantidadCds == 0) {
        std::cout << "No hay CDs disponibles para agregar canciones." << std::endl;
        return;
    }

    // Mostrar la lista de CDs disponibles
    std::cout << "Lista de CDs disponibles:" << std::endl;
    for (int i = 0; i < cantidadCds; ++i) {
        const CD& cd = reproductor.getCdPorIndice(i);
        std::cout << i + 1 << ". " << cd.getNombre() << std::endl;
    }

    // Solicitar al usuario que elija un CD
    int cdElegido;
    std::cout << "Elija un CD para agregar canciones (1-" << cantidadCds << "): ";
    std::cin >> cdElegido;

    if (cdElegido < 1 || cdElegido > cantidadCds) {
        std::cout << "Selecci�n de CD no v�lida." << std::endl;
        return;
    }

    const CD& cdSeleccionado = reproductor.getCdPorIndice(cdElegido - 1);

    // Mostrar las canciones del CD seleccionado
    std::cout << "Canciones del CD \"" << cdSeleccionado.getNombre() << "\":" << std::endl;
    int cantidadCanciones = cdSeleccionado.getCantidadCanciones();
    for (int i = 0; i < cantidadCanciones; ++i) {
        const Cancion& cancion = cdSeleccionado.getCancionPorIndice(i);
        std::cout << i + 1 << ". " << cancion.getNombre() << " - " << cancion.getArtista() << " (" << cancion.getDuracion() << ")" << std::endl;
    }

    // Solicitar al usuario que elija una canci�n
    int cancionElegida;
    std::cout << "Elija una canci�n para agregar a la cola de reproducci�n (1-" << cantidadCanciones << "): ";
    std::cin >> cancionElegida;

    if (cancionElegida < 1 || cancionElegida > cantidadCanciones) {
        std::cout << "Selecci�n de canci�n no v�lida." << std::endl;
        return;
    }

    const Cancion& cancionSeleccionada = cdSeleccionado.getCancionPorIndice(cancionElegida - 1);

    // Agregar la canci�n seleccionada a la cola de reproducci�n (debes implementar esta funci�n en ReproductorCD)
    // reproductor.agregarCancionAReproduccion(cancionSeleccionada);

    std::cout << "Canci�n agregada a la cola de reproducci�n: " << cancionSeleccionada.getNombre() << std::endl;
}
