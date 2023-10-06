#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
#include "VerCola.h"


// Constructor de la clase
VerCola::VerCola() {
    // Inicialización del constructor si es necesario
}

// Método para mostrar la cola de reproducción
void VerCola::mostrarColaDeReproduccion(const ReproductorCD* reproductor) const {
    const std::vector<Cancion>& colaDeReproduccion = reproductor->getColaDeReproduccion();

    if (colaDeReproduccion.empty()) {
        std::cout << "La cola de reproducción está vacía." << std::endl;
    }
    else {
        std::cout << "Cola de Reproducción:" << std::endl;
        for (int i = 0; i < colaDeReproduccion.size(); i++) {
            std::cout << i + 1 << ". " << colaDeReproduccion[i].getNombre() << std::endl;
        }
    }
}







