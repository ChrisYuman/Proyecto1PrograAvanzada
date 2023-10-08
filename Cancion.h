#ifndef CANCION_H // Esto nos sirve para verificar que Cancion.h no este definido anteriormente en el codigo y asi
#define CANCION_H // Esto nos sirve para definir el Cancion.h

#include <string> //Añadimos la biblioteca de string

class Cancion {
public:
    Cancion(const std::string& nombre, const std::string& artista, const std::string& duracion);

    std::string getNombre() const;
    std::string getArtista() const;
    std::string getDuracion() const;

    Cancion() : nombre(""), artista(""), duracion("") {}  

private:
    std::string nombre;
    std::string artista;
    std::string duracion;
};

#endif  // Esto sirve para marcar el final de la seccion o bien de este codigo
