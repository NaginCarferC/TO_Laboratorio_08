#pragma once
#include <iostream>
#include "Receta.h"

using namespace std;

class RecetaFactory {
public:
    static Receta* crearReceta(int opcion) {
        Receta* receta = nullptr;
        switch (opcion) {
            case 1:
                receta = new Ceviche();
                break;
            case 2:
                receta = new RocotoRelleno();
                break;
            case 3:
                receta = new PizzaNapolitana();
                break;
            case 4:
                receta = new Ramen();
                break;
            default:
                cout << "Opcion no valida, elige entre 1 y 4." << endl;
                return nullptr;
        }
        receta->prepararIngredientes();
        receta->cocinar();
        receta->emplatar();
        return receta;
    }
};
