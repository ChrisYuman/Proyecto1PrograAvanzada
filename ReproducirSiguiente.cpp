#include "ReproducirSiguiente.h" //Incluimos el .h
#include <iostream>


ReproducirSiguiente::ReproducirSiguiente() {
}

void ReproducirSiguiente::reproducirSiguiente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion(); // Aca se copia la cola

    if (colaDeReproduccion.size() >= 2) {
        // Aca obtenemos la primera canci�n en la cola

        Cancion primeraCancion = colaDeReproduccion.front();

        // Aca eliminamos la primera canci�n de la cola

        colaDeReproduccion.erase(colaDeReproduccion.begin());

        // Aca obtuvimos la segunda canci�n en la cola

        Cancion segundaCancion = colaDeReproduccion.front();

        // Aca eliminamos la segunda canci�n de la cola

        colaDeReproduccion.erase(colaDeReproduccion.begin());

        // Aca insertarmos la primera canci�n al final de la cola de reproducci�n

        colaDeReproduccion.push_back(primeraCancion);

        // Aca insertamos la segunda canci�n al inicio de la cola de reproducci�n

        colaDeReproduccion.insert(colaDeReproduccion.begin(), segundaCancion);

        //Aca actualizamos la cola de reproducci�n en el objeto reproductor

        reproductor->setColaDeReproduccion(colaDeReproduccion);

        //Aca mostramos la informaci�n de la nueva canci�n en reproducci�n

        std::cout << "Reproduciendo Siguiente:" << std::endl;
        std::cout << "Nombre: " << segundaCancion.getNombre() << std::endl;
        std::cout << "Artista: " << segundaCancion.getArtista() << std::endl;
        std::cout << "Duraci�n: " << segundaCancion.getDuracion() << std::endl;
    }
    else {
        std::cout << "No hay suficientes canciones en la cola para reproducir la siguiente." << std::endl;
    }
}
