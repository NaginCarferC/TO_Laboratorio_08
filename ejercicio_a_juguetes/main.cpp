#include <iostream>
#include <string>
#include "ToyFactory.cpp"

using namespace std;

int main() {
    int type;
    while (true) {
        cout << endl << "Ingresa un tipo (1 a 3) o '0' para salir" << endl;
        if (!(cin >> type)) {
            break;
        }
        if (!type) {
            break;
        }
        Toy* v = ToyFactory::createToy(type);
        if (v) {
            v->showProduct();
            delete v;
        }
    }
    cout << "Saliendo..." << endl;
    return 0;
}
