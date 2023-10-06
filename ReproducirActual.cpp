#include "ReproducirActual.h"
#include <iostream>


ReproducirActual::ReproducirActual() {
    // Inicializamos la canci�n en reproducci�n en blanco (sin canci�n)
    cancionEnReproduccion = Cancion("", "", "");
}

void ReproducirActual::establecerCancionEnReproduccion(const Cancion& cancion) {
    cancionEnReproduccion = cancion;
}

const Cancion& ReproducirActual::obtenerCancionEnReproduccion() const {
    return cancionEnReproduccion;
}

bool ReproducirActual::hayCancionEnReproduccion() const {
    return !cancionEnReproduccion.getNombre().empty();
}

void ReproducirActual::mostrarInformacion() const {
    if (hayCancionEnReproduccion()) {
        std::cout << "Reproduciendo:" << std::endl;
        std::cout << "Nombre: " << cancionEnReproduccion.getNombre() << std::endl;
        std::cout << "Artista: " << cancionEnReproduccion.getArtista() << std::endl;
        std::cout << "Duraci�n: " << cancionEnReproduccion.getDuracion() << std::endl;
        // Puedes agregar el nombre del CD aqu� si est� disponible en tu modelo de datos.
    }
    else {
        std::cout << "Reproducci�n en Pausa" << std::endl;
    }
}
