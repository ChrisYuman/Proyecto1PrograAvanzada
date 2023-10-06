#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
#include "VerCola.h"



VerCola::VerCola(ReproductorCD& reproductor) : reproductor(reproductor) {}

void VerCola::mostrarCola() {
    std::queue<Cancion> cola = reproductor.getColaReproduccion();

    if (cola.empty()) {
        std::cout << "La cola de reproducción está vacía." << std::endl;
    }
    else {
        std::cout << "Canciones en la cola de reproducción:" << std::endl;
        int i = 1;
        // No es necesario eliminar elementos de la cola original, así que vamos a usar una cola auxiliar para mostrar las canciones.
        std::queue<Cancion> colaAuxiliar = cola;

        while (!colaAuxiliar.empty()) {
            const Cancion& cancion = colaAuxiliar.front();
            std::cout << i << ". " << cancion.getNombre() << " - " << cancion.getArtista() << " (" << cancion.getDuracion() << ")" << std::endl;
            colaAuxiliar.pop();
            i++;
        }
    }
}






