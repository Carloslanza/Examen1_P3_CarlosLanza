//
//  Inventario.cpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#include "Inventario.hpp"

Inventario::Inventario() {
    this->piedras = 0;
    this->lingotesDeHierro = 0;
    this->diamantes = 0;
    this->palos = 0;
}
Inventario::~Inventario() {
    // libera la memoria memoria
    for (Pico* pico : this->picos)
        delete pico;
    for (Bloque* bloque : this->bloques)
        delete bloque;
}

const int Inventario::getPiedras() {
    return this->piedras;
}
const int Inventario::getLingotesDeHierro() {
    return this->lingotesDeHierro;
}
const int Inventario::getDiamantes() {
    return this->diamantes;
}
const int Inventario::getPalos() {
    return this->palos;
}
const vector<Pico*> Inventario::getPicos() {
    return this->picos;
}
const vector<Bloque*> Inventario::getBloques() {
    return this->bloques;
}

void Inventario::agregarPiedra() {
    
}

void Inventario::mostrarInformacion() {
    
}
