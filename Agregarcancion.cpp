#include "Agregarcancion.h"
#include <iostream>

Agregarcancion::Agregarcancion() {
    
}

void Agregarcancion::ejecutarAgregarcancion(ReproductorCD* reproductor) {

    // Llamar al m�todo de ReproductorCD para obtener la lista de CDs
    const std::vector<CD>& listaCds = reproductor->getListaCds();

    // Mostrar la lista de CDs al usuario
    std::cout << "Lista de CDs:" << std::endl;
    for (int i = 0; i < listaCds.size(); i++) {
        std::cout << i + 1 << ". " << listaCds[i].getNombre() << std::endl;
    }

    // Solicitar al usuario que elija un CD
    int opcionCd;
    std::cout << "Seleccione un CD por n�mero: ";
    std::cin >> opcionCd;

    // Verificar si la opci�n es v�lida
    if (opcionCd >= 1 && opcionCd <= listaCds.size()) {
        // Obtener el CD seleccionado por el usuario
        const CD& cdSeleccionado = listaCds[opcionCd - 1];

        // Obtener la lista de canciones del CD seleccionado
        const std::vector<Cancion>& listaCanciones = cdSeleccionado.getCanciones();

        // Mostrar la lista de canciones del CD
        std::cout << "Lista de Canciones en " << cdSeleccionado.getNombre() << ":" << std::endl;
        for (int i = 0; i < listaCanciones.size(); i++) {
            std::cout << i + 1 << ". " << listaCanciones[i].getNombre() << std::endl;
        }

        // Solicitar al usuario que elija una canci�n
        int opcionCancion;
        std::cout << "Seleccione una cancion por numero: ";
        std::cin >> opcionCancion;

        // Verificar si la opci�n de canci�n es v�lida
        if (opcionCancion >= 1 && opcionCancion <= listaCanciones.size()) {
            
            const Cancion& cancionSeleccionada = listaCanciones[opcionCancion - 1];

            reproductor->agregarCancionALaCola(cancionSeleccionada);

            std::cout << "Cancion agregada a la cola de reproduccion: " << cancionSeleccionada.getNombre() << std::endl;
        }
        else {
            std::cout << "Opcion de cancion no valida." << std::endl;
        }
    }
    else {
        std::cout << "Opcion de CD no valido." << std::endl;
    }
}



