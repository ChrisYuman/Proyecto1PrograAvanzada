#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
#include "VerCola.h"


// Constructor de la clase
VerCola::VerCola() {
    // Inicializaci�n del constructor si es necesario
}

// M�todo para mostrar la cola de reproducci�n
void VerCola::mostrarColaDeReproduccion(const ReproductorCD* reproductor) const {
    const std::vector<Cancion>& colaDeReproduccion = reproductor->getColaDeReproduccion();

    if (colaDeReproduccion.empty()) {
        std::cout << "La cola de reproducci�n est� vac�a." << std::endl;
    }
    else {
        std::cout << "Cola de Reproducci�n:" << std::endl;
        for (int i = 0; i < colaDeReproduccion.size(); i++) {
            std::cout << i + 1 << ". " << colaDeReproduccion[i].getNombre() << std::endl;
        }
    }
}







