#include "Agregarcancion.h"
#include <iostream>

Agregarcancion::Agregarcancion(ReproductorCD* reproductor) : reproductor(reproductor) {}

void Agregarcancion::agregarCancionAReproduccion() {
    mostrarCdsDisponibles();

    int indiceCd;
    std::cout << "Elija un CD por su número: ";
    std::cin >> indiceCd;

    if (indiceCd >= 0 && indiceCd < reproductor->getCantidadCds()) {
        mostrarCancionesDeCd(indiceCd);

        int indiceCancion;
        std::cout << "Elija una canción por su número: ";
        std::cin >> indiceCancion;

        const CD& cdSeleccionado = reproductor->getCdPorIndice(indiceCd);
        if (indiceCancion >= 0 && indiceCancion < cdSeleccionado.getCantidadCanciones()) {
            const Cancion& cancionSeleccionada = cdSeleccionado.getCancionPorIndice(indiceCancion);
            colaReproduccion.push(cancionSeleccionada);
            std::cout << "Canción agregada a la cola de reproducción." << std::endl;
        }
        else {
            std::cerr << "Número de canción no válido." << std::endl;
        }
    }
    else {
        std::cerr << "Número de CD no válido." << std::endl;
    }
}

void Agregarcancion::mostrarCdsDisponibles() {
    const std::vector<CD>& cds = reproductor->getListaCds();
    std::cout << "CDs disponibles:" << std::endl;
    for (size_t i = 0; i < cds.size(); ++i) {
        std::cout << i << ". " << cds[i].getNombre() << std::endl;
    }
}

void Agregarcancion::mostrarCancionesDeCd(int indiceCd) {
    const CD& cdSeleccionado = reproductor->getCdPorIndice(indiceCd);
    std::cout << "Canciones del CD '" << cdSeleccionado.getNombre() << "':" << std::endl;
    for (size_t i = 0; i < cdSeleccionado.getCantidadCanciones(); ++i) {
        const Cancion& cancion = cdSeleccionado.getCancionPorIndice(i);
        std::cout << i << ". " << cancion.getNombre() << " - " << cancion.getArtista() << std::endl;
    }
}
