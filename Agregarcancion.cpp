#include "Agregarcancion.h"
#include <iostream>

Agregarcancion::Agregarcancion(ReproductorCD* reproductor) : reproductor(reproductor) {}

void Agregarcancion::agregarCancionAReproduccion() {
    mostrarCdsDisponibles();

    int indiceCd;
    std::cout << "Elija un CD por su n�mero: ";
    std::cin >> indiceCd;

    if (indiceCd >= 0 && indiceCd < reproductor->getCantidadCds()) {
        mostrarCancionesDeCd(indiceCd);

        int indiceCancion;
        std::cout << "Elija una canci�n por su n�mero: ";
        std::cin >> indiceCancion;

        const CD& cdSeleccionado = reproductor->getCdPorIndice(indiceCd);
        if (indiceCancion >= 0 && indiceCancion < cdSeleccionado.getCantidadCanciones()) {
            const Cancion& cancionSeleccionada = cdSeleccionado.getCancionPorIndice(indiceCancion);
            colaReproduccion.push(cancionSeleccionada);
            std::cout << "Canci�n agregada a la cola de reproducci�n." << std::endl;
        }
        else {
            std::cerr << "N�mero de canci�n no v�lido." << std::endl;
        }
    }
    else {
        std::cerr << "N�mero de CD no v�lido." << std::endl;
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
