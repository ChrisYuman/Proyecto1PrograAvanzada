#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
#include "VerCola.h"


VerCola::VerCola() {}


void VerCola::mostrarColaDeReproduccion(const ReproductorCD* reproductor) const {
    const std::vector<Cancion>& colaDeReproduccion = reproductor->getColaDeReproduccion();

    if (colaDeReproduccion.empty()) {
        std::cout << "La cola de reproduccion esta vacia." << std::endl;
    }
    else {
        std::cout << "Cola de Reproduccion:" << std::endl;
        for (int i = 0; i < colaDeReproduccion.size(); i++) {
            std::cout << i + 1 << ". " << colaDeReproduccion[i].getNombre() << std::endl;
        }
    }
}







