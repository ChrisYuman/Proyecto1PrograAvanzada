#ifndef REPRODUCTORCD_H
#define REPRODUCTORCD_H

#include <string>
#include <vector>
#include "CD.h"

class ReproductorCD {
public:
    ReproductorCD();

    void cargarRespaldosDesdeCarpeta(const std::string& carpeta);
    void imprimirDiscos() const;

private:
    std::vector<CD> listaCds;

    void cargarCdDesdeArchivo(const std::string& nombreArchivo);
};

#endif  // REPRODUCTORCD_H

