#include "Ordenar.h"
#include <algorithm>


Ordenar::Ordenar() {}

void Ordenar::ordenarPorNombreArtistaAscendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Ordena la cola por nombre de artista de forma ascendente
    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getArtista() < b.getArtista();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorNombreArtistaDescendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Ordena la cola por nombre de artista de forma descendente
    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getArtista() > b.getArtista();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);

}
void Ordenar::ordenarPorNombreCancionAscendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Ordena la cola por nombre de la canci�n de forma ascendente
    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getNombre() < b.getNombre();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorNombreCancionDescendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Ordena la cola por nombre de la canci�n de forma descendente
    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getNombre() > b.getNombre();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorDuracionAscendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Ordena la cola por duraci�n de forma ascendente
    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getDuracion() < b.getDuracion();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorDuracionDescendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Ordena la cola por duraci�n de forma descendente
    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getDuracion() > b.getDuracion();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
