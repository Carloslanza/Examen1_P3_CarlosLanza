//
//  Pico.cpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#include "Pico.hpp"

Pico::Pico(string material) {
    this->material = material;
    
    // determinar vida
    if (material == "piedra")
        this->vida = 100;
    else if (material == "hierro")
        this->vida = 250;
    else if (material == "diamante")
        this->vida = 500;
}
Pico::~Pico() {}

const string Pico::getMaterial() {
    return this->material;
}
const int Pico::getVida() {
    return this->vida;
}

void Pico::setMaterial(const string material) {
    this->material = material;
}
void Pico::setVida(const int vida) {
    this->vida = vida;
}
void Pico::mostrarInformacion() {
    
}
