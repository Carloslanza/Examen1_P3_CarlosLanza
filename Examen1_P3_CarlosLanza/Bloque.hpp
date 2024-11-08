//
//  Bloque.hpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#ifndef Bloque_hpp
#define Bloque_hpp

#include <iostream>
#include <string>
using namespace std;

class Bloque {
private:
    string material;
    int durabilidad;
    float tiempoEnRomper;
public:
    Bloque(string);
    ~Bloque();
    
    const string getMaterial();
    const int getDurabilidad();
    const float getTiempoEnRomper();
    
    void setMaterial(const string);
    void setDurabilidad(const int);
    void setTiempoEnRomper(const float);
    
    void mostrarInformacion();
};

#endif /* Bloque_hpp */
