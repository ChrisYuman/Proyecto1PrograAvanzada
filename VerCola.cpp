#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
#include "VerCola.h"



VerCola::VerCola(ReproductorCD* reproductor) : reproductor(reproductor) {}

void VerCola::mostrarColaYUltimaCancionAgregada(const Cancion& ultimaCancionAgregada) {
    const std::queue<Cancion>& colaReproduccion = reproductor->getColaReproduccion();

    if (colaReproduccion.empty()) {
        std::cout << "La cola de reproducci�n est� vac�a." << std::endl;
    }
    else {
        std::cout << "Canciones en la cola de reproducci�n:" << std::endl;
        int i = 1;
        std::queue<Cancion> copiaCola = colaReproduccion; // Hacemos una copia para no modificar la cola original
        while (!copiaCola.empty()) {
            const Cancion& cancion = copiaCola.front();
            std::cout << i << ". " << cancion.getNombre() << " - " << cancion.getArtista() << " (" << cancion.getDuracion() << ")" << std::endl;
            copiaCola.pop();
            i++;
        }
    }

    std::cout << "�ltima canci�n agregada: " << ultimaCancionAgregada.getNombre() << " - " << ultimaCancionAgregada.getArtista() << " (" << ultimaCancionAgregada.getDuracion() << ")" << std::endl;
}


