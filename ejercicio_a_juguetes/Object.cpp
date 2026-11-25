#pragma once
#include <iostream>
#include <string>

using namespace std;

class Toy {
protected:
    string name;
    float price;
public:
    Toy() : name(""), price(0.0f) {}
    virtual ~Toy() {}
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel() = 0;
    virtual void showProduct() = 0;
};

class Car : public Toy {
public:
    Car() {
        name = "Auto de juguete";
        price = 45.50f;
    }
    void prepareParts() override { cout << "Preparando partes de Car" << endl; }
    void combineParts() override { cout << "Combinando partes de Car" << endl; }
    void assembleParts() override { cout << "Ensamblando partes de Car" << endl; }
    void applyLabel() override { cout << "Aplicando etiquetado de Car" << endl; }
    void showProduct() override {
        cout << "Name: " << name << endl << "Price: " << price << endl;
    }
};

class Bike : public Toy {
public:
    Bike() {
        name = "Bicicleta de juguete";
        price = 32.00f;
    }
    void prepareParts() override { cout << "Preparando partes de Bike" << endl; }
    void combineParts() override { cout << "Combinando partes de Bike" << endl; }
    void assembleParts() override { cout << "Ensamblando partes de Bike" << endl; }
    void applyLabel() override { cout << "Aplicando etiquetado de Bike" << endl; }
    void showProduct() override {
        cout << "Name: " << name << endl << "Price: " << price << endl;
    }
};

class Plane : public Toy {
public:
    Plane() {
        name = "Avion de juguete";
        price = 58.90f;
    }
    void prepareParts() override { cout << "Preparando partes de Plane" << endl; }
    void combineParts() override { cout << "Combinando partes de Plane" << endl; }
    void assembleParts() override { cout << "Ensamblando partes de Plane" << endl; }
    void applyLabel() override { cout << "Aplicando etiquetado de Plane" << endl; }
    void showProduct() override {
        cout << "Name: " << name << endl << "Price: " << price << endl;
    }
};
