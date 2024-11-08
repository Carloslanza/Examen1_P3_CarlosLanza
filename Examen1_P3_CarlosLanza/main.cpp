//
//  main.cpp
//  Examen1_P3_CarlosLanza
//
//  Created by carlos lanza on 11/8/24.
//

#include "Inventario.hpp"

Inventario* inventario;

void menu() {
    bool continuar = true;
    do {
        cout << "-----MENÚ-----\n";
        cout << "0. Salir\n";
        cout << "1. Agregar piedra\n";
        cout << "2. Agregar lingote de hierro\n";
        cout << "3. Agregar diamante\n";
        cout << "4. Agregar un palo\n";
        cout << "5. Crear pico de piedra\n";
        cout << "6. Crear pico de hierro\n";
        cout << "7. Crear pico de diamante\n";
        cout << "8. Listar picos\n";
        cout << "9. Mejorar pico\n";
        cout << "10. Listar bloques\n";
        cout << "11. Agregar bloque\n";
        cout << "12. Romper bloque\n";
        
        int opcion;
        cin >> opcion;
        cout << endl;
        
        switch(opcion) {
            case 0:
                continuar = false;
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            default: cout << "Opción incorrecta, intente de nuevo" << endl;
        }
        
    } while (continuar);
}

int main() {
    inventario = new Inventario();
    menu();
    delete inventario;
    return 0;
}
