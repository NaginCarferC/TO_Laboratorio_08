#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Receta {
protected:
    string nombre;
    string origen;
    int tiempoMinutos;
    vector<string> ingredientes;
    vector<string> pasos;
public:
    Receta() : nombre(""), origen(""), tiempoMinutos(0) {}
    virtual ~Receta() {}
    virtual void prepararIngredientes() = 0;
    virtual void cocinar() = 0;
    virtual void emplatar() = 0;
    virtual void mostrarReceta() = 0;
};

class Ceviche : public Receta {
public:
    Ceviche() {
        nombre = "Ceviche Clasico";
        origen = "Lima, Peru";
        tiempoMinutos = 25;
        ingredientes = {"Pescado fresco en cubos", "Limon sutil", "Cebolla roja", "Aji limo", "Culantro", "Camote y choclo"};
        pasos = {"Cortar el pescado y sazonar con sal", "Agregar jugo de limon recien exprimido", "Incorporar cebolla, aji limo y culantro"};
    }
    void prepararIngredientes() override {
        cout << "Lavando pescado fresco y exprimiendo limones..." << endl;
    }
    void cocinar() override {
        cout << "Curtiendo el pescado en leche de tigre por 5 minutos..." << endl;
    }
    void emplatar() override {
        cout << "Sirviendo en plato hondo con camote glaseado y choclo." << endl;
    }
    void mostrarReceta() override {
        cout << "Receta: " << nombre << " (" << origen << ")" << endl;
        cout << "Tiempo estimado: " << tiempoMinutos << " min" << endl;
        cout << "Ingredientes:" << endl;
        for (const auto& ing : ingredientes) cout << "  - " << ing << endl;
        cout << "Pasos:" << endl;
        for (size_t i = 0; i < pasos.size(); ++i) cout << "  " << i + 1 << ". " << pasos[i] << endl;
    }
};

class RocotoRelleno : public Receta {
public:
    RocotoRelleno() {
        nombre = "Rocoto Relleno Arequipeno";
        origen = "Arequipa, Peru";
        tiempoMinutos = 65;
        ingredientes = {"Rocotos grandes", "Carne picada", "Cebolla", "Mani tostado", "Pasas", "Queso fresco", "Leche y huevo"};
        pasos = {"Desvenar y hervir los rocotos tres veces", "Sofreir el aderezo con carne, mani y pasas", "Rellenar, cubrir con queso y hornear con pastel de papa"};
    }
    void prepararIngredientes() override {
        cout << "Desvenando rocotos y picando carne a cuchillo..." << endl;
    }
    void cocinar() override {
        cout << "Preparando el relleno en sarten y gratinando al horno..." << endl;
    }
    void emplatar() override {
        cout << "Sirviendo el rocoto caliente junto al pastel de papa." << endl;
    }
    void mostrarReceta() override {
        cout << "Receta: " << nombre << " (" << origen << ")" << endl;
        cout << "Tiempo estimado: " << tiempoMinutos << " min" << endl;
        cout << "Ingredientes:" << endl;
        for (const auto& ing : ingredientes) cout << "  - " << ing << endl;
        cout << "Pasos:" << endl;
        for (size_t i = 0; i < pasos.size(); ++i) cout << "  " << i + 1 << ". " << pasos[i] << endl;
    }
};

class PizzaNapolitana : public Receta {
public:
    PizzaNapolitana() {
        nombre = "Pizza Napolitana";
        origen = "Napoles, Italia";
        tiempoMinutos = 40;
        ingredientes = {"Masa fermentada", "Tomate San Marzano", "Mozzarella fresca", "Albahaca", "Aceite de oliva"};
        pasos = {"Estirar la masa a mano dejando borde aireado", "Untar salsa de tomate triturado y colocar mozzarella", "Hornear a alta temperatura y decorar con albahaca"};
    }
    void prepararIngredientes() override {
        cout << "Estirando la masa artesanal y triturando tomates..." << endl;
    }
    void cocinar() override {
        cout << "Horneando a temperatura alta hasta dorar el borde..." << endl;
    }
    void emplatar() override {
        cout << "Cortando en porciones con hojas de albahaca fresca." << endl;
    }
    void mostrarReceta() override {
        cout << "Receta: " << nombre << " (" << origen << ")" << endl;
        cout << "Tiempo estimado: " << tiempoMinutos << " min" << endl;
        cout << "Ingredientes:" << endl;
        for (const auto& ing : ingredientes) cout << "  - " << ing << endl;
        cout << "Pasos:" << endl;
        for (size_t i = 0; i < pasos.size(); ++i) cout << "  " << i + 1 << ". " << pasos[i] << endl;
    }
};

class Ramen : public Receta {
public:
    Ramen() {
        nombre = "Ramen Shoyu";
        origen = "Tokio, Japon";
        tiempoMinutos = 50;
        ingredientes = {"Fideos alcalinos", "Caldo base con salsa de soya", "Cerdo chashu", "Huevo marinado", "Cebollin y alga nori"};
        pasos = {"Calentar el caldo aromatico con tare de soya", "Cocer los fideos por 2 minutos", "Armar el tazon con el cerdo, huevo partido y cebollin"};
    }
    void prepararIngredientes() override {
        cout << "Cortando el cerdo chashu, cebollin y marinando el huevo..." << endl;
    }
    void cocinar() override {
        cout << "Hirviendo los fideos y llevando el caldo a punto de ebullicion..." << endl;
    }
    void emplatar() override {
        cout << "Sirviendo en tazon profundo con alga nori a un lado." << endl;
    }
    void mostrarReceta() override {
        cout << "Receta: " << nombre << " (" << origen << ")" << endl;
        cout << "Tiempo estimado: " << tiempoMinutos << " min" << endl;
        cout << "Ingredientes:" << endl;
        for (const auto& ing : ingredientes) cout << "  - " << ing << endl;
        cout << "Pasos:" << endl;
        for (size_t i = 0; i < pasos.size(); ++i) cout << "  " << i + 1 << ". " << pasos[i] << endl;
    }
};
