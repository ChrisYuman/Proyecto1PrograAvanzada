#include "ReproducirActual.h"
#include <iostream>


ReproduciActual::ReproduciActual() {
    // Constructor si es necesario
}

void ReproduciActual::mostrarPrimeraCancionEnCola(const ReproductorCD* reproductor) const {
    const std::vector<Cancion>& colaDeReproduccion = reproductor->getColaDeReproduccion();

    if (colaDeReproduccion.empty()) {
        std::cout << "La cola de reproducción está vacía." << std::endl;
    }
    else {
        std::cout << "Primera canción en la cola de reproducción:" << std::endl;
        std::cout << "Nombre: " << colaDeReproduccion[0].getNombre() << std::endl;
        std::cout << "Artista: " << colaDeReproduccion[0].getArtista() << std::endl;
        std::cout << "Duración: " << colaDeReproduccion[0].getDuracion() << std::endl;
    }
}
