#ifndef CANCION_H
#define CANCION_H

#include <string>

class Cancion {
public:
    Cancion(const std::string& nombre, int duracion);
    std::string getNombre() const;
    int getDuracion() const;
private:
    std::string nombre;
    int duracion;
};

#endif // CANCION_H
