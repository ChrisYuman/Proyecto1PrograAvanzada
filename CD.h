#ifndef CD_H
#define CD_H

#include <string>
#include <vector>
#include "Cancion.h"

class CD {
public:
    CD(const std::string& nombre);

    void agregarCancion(const Cancion& cancion);

    std::string getNombre() const;
    int getCantidadCanciones() const;
    const std::vector<Cancion>& getCanciones() const;

private:
    std::string nombre;
    std::vector<Cancion> canciones;
};

#endif  // CD_H
