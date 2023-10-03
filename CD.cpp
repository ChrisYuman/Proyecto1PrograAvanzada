#include "CD.h"

CD::CD(const std::string& nombre) : nombre(nombre) {}

void CD::agregarCancion(const Cancion& cancion) {
    canciones.push_back(cancion);
}

std::string CD::getNombre() const {
    return nombre;
}

int CD::getCantidadCanciones() const {
    return canciones.size();
}

const std::vector<Cancion>& CD::getCanciones() const {
    return canciones;
}
