#include "ReproducirActual.h"
#include <iostream>


ReproduciActual::ReproduciActual() {
    // Constructor si es necesario
}

void ReproduciActual::mostrarPrimeraCancionEnCola(const ReproductorCD* reproductor) const {
    const std::vector<Cancion>& colaDeReproduccion = reproductor->getColaDeReproduccion();

    if (colaDeReproduccion.empty()) {
        std::cout << "La cola de reproducci�n est� vac�a." << std::endl;
    }
    else {
        std::cout << "Primera canci�n en la cola de reproducci�n:" << std::endl;
        std::cout << "Nombre: " << colaDeReproduccion[0].getNombre() << std::endl;
        std::cout << "Artista: " << colaDeReproduccion[0].getArtista() << std::endl;
        std::cout << "Duraci�n: " << colaDeReproduccion[0].getDuracion() << std::endl;
    }
}
