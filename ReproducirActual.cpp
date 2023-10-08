#include "ReproducirActual.h" //Incluimos el .h
#include <iostream>


ReproduciActual::ReproduciActual() {}

void ReproduciActual::mostrarPrimeraCancionEnCola(const ReproductorCD* reproductor) const {
    const std::vector<Cancion>& colaDeReproduccion = reproductor->getColaDeReproduccion();

    if (colaDeReproduccion.empty()) {
        std::cout << "La cola de reproduccion esta vacia." << std::endl;
    }
    else {
        std::cout << "Primera cancion en la cola de reproduccion:" << std::endl;
        std::cout << "Nombre: " << colaDeReproduccion[0].getNombre() << std::endl;
        std::cout << "Artista: " << colaDeReproduccion[0].getArtista() << std::endl;
        std::cout << "Duracion: " << colaDeReproduccion[0].getDuracion() << std::endl;
    }
}
