#include "ReproducirSiguiente.h"
#include <iostream>


ReproducirSiguiente::ReproducirSiguiente() {
}

void ReproducirSiguiente::reproducirSiguiente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion(); // Copia la cola

    if (colaDeReproduccion.size() >= 2) { 
        Cancion cancionSiguiente = colaDeReproduccion[1];

        // Eliminar la primera canci�n de la cola
        colaDeReproduccion.erase(colaDeReproduccion.begin());

        // Insertar la canci�n al final de la cola de reproducci�n
        colaDeReproduccion.push_back(cancionSiguiente);

        // Asignar la copia actualizada de la cola de reproducci�n al objeto original
        reproductor->setColaDeReproduccion(colaDeReproduccion);

        // Mostrar la informaci�n de la nueva canci�n en reproducci�n
        std::cout << "Reproduciendo Siguiente:" << std::endl;
        std::cout << "Nombre: " << cancionSiguiente.getNombre() << std::endl;
        std::cout << "Artista: " << cancionSiguiente.getArtista() << std::endl;
        std::cout << "Duracion: " << cancionSiguiente.getDuracion() << std::endl;
    }
    else {
        std::cout << "No hay suficientes canciones en la cola para reproducir la siguiente." << std::endl;
    }
}
