#include "Cancion.h"

Cancion::Cancion(const std::string& nombre, int duracion) : nombre(nombre), duracion(duracion) {}

std::string Cancion::getNombre() const {
    return nombre;
}

int Cancion::getDuracion() const {
    return duracion;
}
