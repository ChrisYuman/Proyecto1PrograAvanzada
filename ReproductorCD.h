#ifndef REPRODUCTORCD_H
#define REPRODUCTORCD_H

#include <vector>
#include "CD.h"

class ReproductorCD {
public:
    ReproductorCD();
    void cargarCdsDesdeCarpeta(const std::string& carpeta);
    void reproducirCd(int indiceCd);
private:
    std::vector<CD> listaCds;
};

#endif // REPRODUCTORCD_H
