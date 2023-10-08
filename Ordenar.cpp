#include "Ordenar.h" //Incluimos el .h 
#include <algorithm> //Esta libreria nos sirvio para ordenar la cola de forma ascendente y descendente, usando el sort


Ordenar::Ordenar() {}

void Ordenar::ordenarPorNombreArtistaAscendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Aca ordenamos la cola por nombre de artista de forma ascendente

    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getArtista() < b.getArtista();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorNombreArtistaDescendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Aca ordenamos la cola por nombre de artista de forma descendente

    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getArtista() > b.getArtista();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);

}
void Ordenar::ordenarPorNombreCancionAscendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Aca ordenamos la cola por nombre de la canción de forma ascendente

    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getNombre() < b.getNombre();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorNombreCancionDescendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Aca ordenamos la cola por nombre de la canción de forma descendente

    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getNombre() > b.getNombre();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorDuracionAscendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Aca ordenamos la cola por duración de forma ascendente

    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getDuracion() < b.getDuracion();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
void Ordenar::ordenarPorDuracionDescendente(ReproductorCD* reproductor) {
    std::vector<Cancion> colaDeReproduccion = reproductor->getColaDeReproduccion();

    // Aca ordenamos la cola por duración de forma descendente

    std::sort(colaDeReproduccion.begin(), colaDeReproduccion.end(),
        [](const Cancion& a, const Cancion& b) {
            return a.getDuracion() > b.getDuracion();
        }
    );

    reproductor->setColaDeReproduccion(colaDeReproduccion);
}
