//
//  Bloque.cpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#include "Bloque.hpp"

Bloque::Bloque(string material) {
    this->material = material;
    
    // determinar durabilidad y tiempo en romper
    if (material == "obsidiana") {
        this->durabilidad = 275;
        this->tiempoEnRomper = 15.0;
    }
    else if (material == "oro") {
        this->durabilidad = 118;
        this->tiempoEnRomper = 12.1;
    }
    else if (material == "carbon") {
        this->durabilidad = 50;
        this->tiempoEnRomper = 6.3;
    }
}
Bloque::~Bloque() {}

const string Bloque::getMaterial() {
    return this->material;
}
const int Bloque::getDurabilidad() {
    return this->durabilidad;
}
const float Bloque::getTiempoEnRomper() {
    return this->tiempoEnRomper;
}

void Bloque::setMaterial(const string material) {
    this->material = material;
}
void Bloque::setDurabilidad(const int durabilidad) {
    this->durabilidad = durabilidad;
}
void Bloque::setTiempoEnRomper(const float tiempoEnRomper) {
    this->tiempoEnRomper = tiempoEnRomper;
}
void Bloque::mostrarInformacion() {
    
}
