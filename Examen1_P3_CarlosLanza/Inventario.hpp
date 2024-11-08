//
//  Inventario.hpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#ifndef Inventario_hpp
#define Inventario_hpp

#include <iostream>
#include <string>
#include <vector>
#include "Pico.hpp"
#include "Bloque.hpp"
using namespace std;

class Inventario {
private:
    int piedras;
    int lingotesDeHierro;
    int diamantes;
    int palos;
    vector<Pico*> picos;
    vector<Bloque*> bloques;
public:
    Inventario();
    ~Inventario();
    
    const int getPiedras();
    const int getLingotesDeHierro();
    const int getDiamantes();
    const int getPalos();
    const vector<Pico*> getPicos();
    const vector<Bloque*> getBloques();
    
    void agregarPiedra();
    
    void mostrarInformacion();
};

#endif /* Inventario_hpp */
