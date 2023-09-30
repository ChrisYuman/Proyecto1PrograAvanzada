#include "CD.h"

CD::CD(const std::string& nombre) : nombre(nombre), cantidadCanciones(0) {}

std::string CD::getNombre() const {
    return nombre;
}

int CD::getCantidadCanciones() const {
    return cantidadCanciones;
}

void CD::agregarCancion(const Cancion& cancion) {
    canciones.push_back(cancion);
    cantidadCanciones++;
}
