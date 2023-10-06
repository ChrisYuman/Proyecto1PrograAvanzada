// Proyecto1PrograAvanzada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ReproductorCD.h"
#include "Agregarcancion.h"
#include "VerCola.h"
#include "ReproducirActual.h"
#include "ReproducirSiguiente.h"
#include "Ordenar.h"
using namespace std; 

int main()
{
    try {

            cout << "Proyecto 1 programacion avanzada\n" << endl;
            cout << "--------------------Bienvenido, en esta aplicacion podra almacenar sus CDs para poder reprdocucirlos--------------------" << endl;
            ReproductorCD reproductor;
            Agregarcancion agregar;
            VerCola vercola;
            ReproduciActual reproducir;
            ReproducirSiguiente siguiente;
            Ordenar ordenar;

        menu1:
            cout << "Menu principal" << endl;
            cout << "Escoga una de las opciones que se presentan a continuacion" << endl;
            cout << "1. Cargar respaldos" << endl;
            cout << "2. Reproductor de canciones" << endl;
            cout << "3. Salir del programa" << endl;
            int opcion;
            cin >> opcion;
            ReproductorCD* reproductorcr = &reproductor;
            Agregarcancion* agregar1 = &agregar;
            string carpeta;

            switch (opcion)
            {
            case 1:
                system("cls"); //limpiar la pantalla 
                cout << "--------------------Aqui podra seleccionar los CDs que desee para poder almacenarlos en el programa---------------------\n" << endl;

                // Solicitar al usuario la ruta de la carpeta de respaldos

                cout << "Ingrese la ruta de la carpeta de respaldos: ";
                cin >> carpeta;

                // Cargar los respaldos desde la carpeta
                reproductorcr->cargarRespaldosDesdeCarpeta(carpeta);

                //Imprimir los discos cargados
                reproductorcr->imprimirDiscos();

                cout << "Desea regresar al menu principal? s=Si, n= No" << endl;
                char elegir;
                cin >> elegir;
                if (elegir == 's') { system("cls");  goto menu1; }
                else { system("cls"); goto menu2; }

                break;

            case 2:
            menu2:
                system("cls");
                cout << "Que desea hacer con sus canciones?" << endl;
                cout << "1. Agregar cancion" << endl;
                cout << "2. Ver cola de reproduccion" << endl;
                cout << "3. Reproducir actual" << endl;
                cout << "4. Reproducir siguiente" << endl;
                cout << "5. Ordenar" << endl;
                cout << "6. Regresar al menu principal" << endl;
                int opcion2;
                cin >> opcion2;
                switch (opcion2) {
                case 1:
                ag:
                    cout << "Agregar cancion\n" << endl;
                    Agregarcancion::ejecutarAgregarcancion(&reproductor);

                    cout << "su canción se ha agregado" << endl;
                    cout << "Desea agregar otra cancion? s=Si, n= No" << endl;
                    char elegir1;
                    cin >> elegir1;
                    if (elegir1 == 's') { system("cls");  goto ag; }
                    else { goto menu2; }
                    break;
                case 2:
                verc:
                    system("cls");
                    cout << "Ver cola de reproduccion\n" << endl;
                    vercola.mostrarColaDeReproduccion(&reproductor);

                    cout << "Por favor, regrese al menu con la letra 's'" << endl;
                    char elegir2;
                    cin >> elegir2;
                    if (elegir2 == 's') { goto menu2; }
                    else { goto verc; }
                    break;
                case 3:
                repa:
                    system("cls");
                    cout << "Reproducir actual\n" << endl;
                    reproducir.mostrarPrimeraCancionEnCola(&reproductor);

                    cout << "Por favor, regrese al menu con la letra 's'" << endl;
                    char elegir3;
                    cin >> elegir3;
                    if (elegir3 == 's') { goto menu2; }
                    else { goto repa; }
                    break;
                case 4:
                reps:
                    system("cls");
                    cout << "Reproducir siguiente\n" << endl;
                    siguiente.reproducirSiguiente(&reproductor);

                    cout << "Por favor, regrese al menu con la letra 's'" << endl;
                    char elegir4;
                    cin >> elegir4;
                    if (elegir4 == 's') { goto menu2; }
                    else { goto reps; }
                    break;
                case 5:
                    system("cls");
                    cout << "Ordenar\n" << endl;
                    cout << "Como desea ordenar la cola?" << endl;
                    cout << "1.Nombre del artista ascendente" << endl;
                    cout << "2.Nombre del artista descendente" << endl;
                    cout << "3.Nombre de cancion ascendente" << endl;
                    cout << "4.Nombre de cancion descendente" << endl;
                    cout << "5.Duracion de cancion ascendente" << endl;
                    cout << "6.Duracion de cancion descendente" << endl;
                    cout << "7.Regresar al menu" << endl;
                    int op;
                    cin >> op;
                    switch (op)
                    {
                    case 1:
                        ordenar.ordenarPorNombreArtistaAscendente(&reproductor);
                        goto menu2;
                        break;
                    case 2:
                        ordenar.ordenarPorNombreArtistaDescendente(&reproductor);
                        goto menu2;
                        break;
                    case 3:
                        ordenar.ordenarPorNombreCancionAscendente(&reproductor);
                        goto menu2;
                        break;
                    case 4:
                        ordenar.ordenarPorNombreCancionDescendente(&reproductor);
                        goto menu2;
                        break;
                    case 5:
                        ordenar.ordenarPorDuracionAscendente(&reproductor);
                        goto menu2;
                        break;
                    case 6:
                        ordenar.ordenarPorDuracionDescendente(&reproductor);
                        goto menu2;
                        break;
                    case 7:

                        goto menu2;
                        break;
                    default:
                        goto menu2;
                        break;
                    }

                    break;
                case 6:
                    system("cls");
                    goto menu1;
                    break;

                default:
                    goto menu2;
                    break;
                }
                break;
            case 3:
                exit(-1);
                break;
            default:
                exit(-1);
                goto menu1;
                break;
            }


    }
    catch (int ex) {
        cout << "Error en el programa";
    }
}


