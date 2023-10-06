#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>

class VerColaReproduccion {
public:
    VerColaReproduccion(ReproductorCD& reproductor);

    void mostrarColaReproduccion();

private:
    ReproductorCD& reproductor;
};

VerColaReproduccion::VerColaReproduccion(ReproductorCD& reproductor) : reproductor(reproductor) {}

void VerColaReproduccion::mostrarColaReproduccion() {
    std::queue<Cancion> cola = reproductor.getColaReproduccion();

    if (cola.empty()) {
        std::cout << "La cola de reproducción está vacía." << std::endl;
    }
    else {
        std::cout << "Canciones en la cola de reproducción:" << std::endl;
        int i = 1;
        while (!cola.empty()) {
            const Cancion& cancion = cola.front();
            std::cout << i << ". " << cancion.getNombre() << " - " << cancion.getArtista() << " (" << cancion.getDuracion() << ")" << std::endl;
            cola.pop();
            i++;
        }
    }
}

int main() {
    ReproductorCD reproductor;
    // Agregar CDs y canciones al reproductor
    // ...

    VerColaReproduccion visorCola(reproductor);
    visorCola.mostrarColaReproduccion();

    return 0;
}
