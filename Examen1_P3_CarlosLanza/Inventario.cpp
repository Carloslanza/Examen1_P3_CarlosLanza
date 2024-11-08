//
//  Inventario.cpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#include <cstdlib>
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
    srand(time(NULL));
    int randNum = rand() % 100 + 1;
    if (randNum <= 75) {
        this->piedras++;
        cout << "piedras + 1" << endl;
        cout << "Piedras: " << piedras << endl;
    }
}
void Inventario::agregarLingoteDeHierro() {
    srand(time(NULL));
    int randNum = rand() % 100 + 1;
    if (randNum <= 50) {
        this->lingotesDeHierro++;
        cout << "hierro + 1" << endl;
        cout << "Hierros: " << lingotesDeHierro << endl;
    }
}
void Inventario::agregarDiamante() {
    srand(time(NULL));
    int randNum = rand() % 100 + 1;
    if (randNum <= 25) {
        this->diamantes++;
        cout << "diamantes + 1" << endl;
        cout << "Diamantes: " << diamantes << endl;
    }
}
void Inventario::agregarPalo() {
    if (this->palos <= 9) {
        this->palos++;
        cout << "palo + 1" << endl;
        cout << "Palos: " << palos << endl;
    }
    else
        cout << "Inventario lleno! Max (9)" << endl;
}

void Inventario::crearPicoDePiedra() {
    if (palos >= 2 && piedras >= 3) {
        this->palos = this->palos - 2;
        this->piedras = this->piedras - 3;
        this->picos.push_back(new Pico("piedra"));
        cout "Se ha creado un pico de piedra!" << endl;
    }
    else
        cout << "Materiales insuficientes! Palos (2) Piedras (3)" << endl;
}
void Inventario::crearPicoDeHierro() {
    if (palos >= 2 && lingotesDeHierro >= 3) {
        this->palos = this->palos - 2;
        this->lingotesDeHierro = this->lingotesDeHierro - 3;
        this->picos.push_back(new Pico("hierro"));
        cout << "Se ha creado un pico de hierro!" << endl;
    }
    else
        cout << "Materiales insuficientes! Palos (2) Hierros (3)" << endl;
}
void Inventario::crearPicoDeDiamante() {
    if (palos >= 2 && diamantes >= 3) {
        this->palos = this->palos - 2;
        this->diamantes = this->diamantes - 3;
        this->picos.push_back(new Pico("diamante"));
        cout << "Se ha creado un pico de diamante!" << endl;
    }
    else
        cout << "Materiales insuficientes! Palos (2) Diamantes (3)" << endl;
}

void Inventario::listarPicos() {
    int contador = 1;
    for (Pico* pico : this->picos) {
        cout << contador++ << ". ";
        pico->mostrarInformacion();
        cout << endl;
    }
}
void Inventario::mejorarPico() {
    bool repetir = true;
    int opcion;
    do {
        int tamaño = this->picos.size();
        listarPicos();
        cout << "Escoger cuál pico mejorar:\n";
        cin >> opcion;
        cout << endl;
        
        repetir = (opcion > 0 && opcion <= tamaño) ? false : true;
        if (repetir)
            cout << "Opción fuera de rango!" << endl;
    } while (repetir);
    
    Pico* pico = this->picos[opcion - 1];
    if (pico->getMaterial() >= "piedra") {
        if (lingotesDeHierro == 3) {
            this->lingotesDeHierro = lingotesDeHierro - 3;
            pico->setMaterial("hierro");
            pico->setVida(250);
            cout << "Ahora tienes un pico de hierro!" << endl;
        }
        else
            cout << "Materiales insuficientes! Hierros (3)" << endl;
    }
    else if (pico->getMaterial() == "hierro") {
        if (diamantes >= 3) {
            this->diamantes = diamantes - 3;
            pico->setMaterial("diamante");
            pico->setVida(500);
            cout << "Ahora tienes un pico de diamante!" << endl;
        }
        else
            cout << "Materiales insuficientes! Diamantes (3)" << endl;
    }
    else if (pico->getMaterial() == "diamante")
        cout << "No se puede mejorar!" << endl;
}

void Inventario::listarBloques() {
    int contador = 1;
    for (Bloque* bloque : this->bloques) {
        cout << contador << ". ";
        bloque->mostrarInformacion();
        cout << endl;
    }
}
void Inventario::agregarBloque() {
    bool repetir;
    int opcion;
    do {
        repetir = false;
        
        cout << "Bloques:\n";
        cout << "1. Obsidiana\n";
        cout << "2. Oro\n";
        cout << "3. Carbón\n";
        
        cin >> opcion;
        cout << endl;
        
        srand(time(NULL));
        int randNum = rand() % 100 + 1;
        switch (opcion) {
            case 1:
                if (randNum <= 33) {
                    this->bloques.push_back(new Bloque("obsidiana"));
                    cout << "obsidiana + 1" << endl;
                }
                break;
            case 2:
                if (randNum <= 66) {
                    this->bloques.push_back(new Bloque("oro"));
                    cout << "oro + 1" << endl;
                }
                break;
            case 3:
                if (randNum <= 75) {
                    this->bloques.push_back(new Bloque("carbon"));
                    cout << "carbón + 1" << endl;
                }
                break;
            default:
                repetir = true;
                cout << "Opción inválida, intente de nuevo" << endl;
        }
        
    } while (repetir);
}
void Inventario::romperBloque() {
    bool repetir = true;
    int opcionBloque;
    int opcionPico;
    do {
        int tamañoBloques = this->bloques.size();
        int tamañoPicos = this->picos.size();
        listarBloques();
        cout << "Escoger cuál bloque romper:\n";
        cin >> opcionBloque;
        cout << endl;
        
        listarPicos();
        cout << "Escoger cuál pico usar:\n";
        cin >> opcionPico;
        cout << endl;
        
        repetir = (opcionBloque > 0 && opcionBloque <= tamañoBloques) && (opcionPico > 0 && opcionPico <= tamañoPicos) ? false : true;
        if (repetir)
            cout << "Opción fuera de rango!" << endl;
    } while (repetir);
    
    Bloque* bloque = this->bloques[opcionBloque];
    Pico* pico = this->picos[opcionPico];
    
}
