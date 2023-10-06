#include "ReproducirSiguiente.h"
#include <iostream>


ReproducirSiguiente::ReproducirSiguiente() {
}

void ReproducirSiguiente::reproducirSiguiente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion(); // Copia la cola

    if (colaDeReproduccion.size() >= 2) {
        // Obtener la primera canción en la cola
        Cancion primeraCancion = colaDeReproduccion.front();

        // Eliminar la primera canción de la cola
        colaDeReproduccion.erase(colaDeReproduccion.begin());

        // Obtener la segunda canción en la cola
        Cancion segundaCancion = colaDeReproduccion.front();

        // Eliminar la segunda canción de la cola
        colaDeReproduccion.erase(colaDeReproduccion.begin());

        // Insertar la primera canción al final de la cola de reproducción
        colaDeReproduccion.push_back(primeraCancion);

        // Insertar la segunda canción al inicio de la cola de reproducción
        colaDeReproduccion.insert(colaDeReproduccion.begin(), segundaCancion);

        // Actualizar la cola de reproducción en el objeto reproductor
        reproductor->setColaDeReproduccion(colaDeReproduccion);

        // Mostrar la información de la nueva canción en reproducción
        std::cout << "Reproduciendo Siguiente:" << std::endl;
        std::cout << "Nombre: " << segundaCancion.getNombre() << std::endl;
        std::cout << "Artista: " << segundaCancion.getArtista() << std::endl;
        std::cout << "Duración: " << segundaCancion.getDuracion() << std::endl;
    }
    else {
        std::cout << "No hay suficientes canciones en la cola para reproducir la siguiente." << std::endl;
    }
}
