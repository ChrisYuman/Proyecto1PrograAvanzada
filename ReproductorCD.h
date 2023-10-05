#ifndef REPRODUCTORCD_H
#define REPRODUCTORCD_H

#include "CD.h"
#include <vector>

class ReproductorCD {
public:
    ReproductorCD();
    void cargarRespaldosDesdeCarpeta(const std::string& carpeta);
    void cargarCdDesdeArchivo(const std::string& nombreArchivo);
    void imprimirDiscos() const;

private:
    std::vector<CD> listaCds;
};

#endif
