//
//  Pico.hpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#ifndef Pico_hpp
#define Pico_hpp

#include <iostream>
#include <string>
using namespace std;

class Pico {
private:
    string material;
    int vida;
public:
    Pico(string);
    ~Pico();
    
    const string getMaterial();
    const int getVida();
    
    void setMaterial(const string);
    void setVida(const int);
    
    void mostrarInformacion();
};

#endif /* Pico_hpp */
