#ifndef CD_H
#define CD_H

#include <string>
#include <vector>
#include "Cancion.h"

class CD {
public:
    CD(const std::string& nombre);
    std::string getNombre() const;
    int getCantidadCanciones() const;
    void agregarCancion(const Cancion& cancion);
private:
    std::string nombre;
    int cantidadCanciones;
    std::vector<Cancion> canciones;
};

#endif // CD_H
