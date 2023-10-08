#include "ReproducirSiguiente.h" //Incluimos el .h
#include <iostream>


ReproducirSiguiente::ReproducirSiguiente() {
}

void ReproducirSiguiente::reproducirSiguiente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion(); // Aca se copia la cola

    if (colaDeReproduccion.size() >= 2) {
        // Aca obtenemos la primera canción en la cola

        Cancion primeraCancion = colaDeReproduccion.front();

        // Aca eliminamos la primera canción de la cola

        colaDeReproduccion.erase(colaDeReproduccion.begin());

        // Aca obtuvimos la segunda canción en la cola

        Cancion segundaCancion = colaDeReproduccion.front();

        // Aca eliminamos la segunda canción de la cola

        colaDeReproduccion.erase(colaDeReproduccion.begin());

        // Aca insertarmos la primera canción al final de la cola de reproducción

        colaDeReproduccion.push_back(primeraCancion);

        // Aca insertamos la segunda canción al inicio de la cola de reproducción

        colaDeReproduccion.insert(colaDeReproduccion.begin(), segundaCancion);

        //Aca actualizamos la cola de reproducción en el objeto reproductor

        reproductor->setColaDeReproduccion(colaDeReproduccion);

        //Aca mostramos la información de la nueva canción en reproducción

        std::cout << "Reproduciendo Siguiente:" << std::endl;
        std::cout << "Nombre: " << segundaCancion.getNombre() << std::endl;
        std::cout << "Artista: " << segundaCancion.getArtista() << std::endl;
        std::cout << "Duración: " << segundaCancion.getDuracion() << std::endl;
    }
    else {
        std::cout << "No hay suficientes canciones en la cola para reproducir la siguiente." << std::endl;
    }
}
