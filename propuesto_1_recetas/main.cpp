#include <iostream>
#include "RecetaFactory.h"

using namespace std;

int main() {
    int opcion;
    while (true) {
        cout << endl << "Elige una receta (1: Ceviche, 2: Rocoto Relleno, 3: Pizza, 4: Ramen, 0: Salir): ";
        if (!(cin >> opcion)) {
            break;
        }
        if (opcion == 0) {
            break;
        }
        Receta* r = RecetaFactory::crearReceta(opcion);
        if (r) {
            cout << endl;
            r->mostrarReceta();
            delete r;
        }
    }
    cout << "Saliendo de la cocina..." << endl;
    return 0;
}
