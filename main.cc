#include "include/generador.hh"

#include <iostream>
#include <string>
#include <random>

using namespace std;

const string SEPARADOR(63, '=');

void informacion_inicio() {
    cout << SEPARADOR << endl;
    cout << "Bienvenido a mi generador de contraseñas!" << endl;
    cout << "En este pequeño programa, podras generar contraseñas dado unos parametros." << endl;
    cout << "El programa te pedira:" << endl;
    cout << "- Cantidad de letras minusculas que quieres" << endl;
    cout << "- Cantidad de letras mayusculas que quieres" << endl;
    cout << "- Cantidad de numeros que quieres" << endl;
    cout << "- Simbolos especiales (@, #,...) que quieres" << endl;
    cout << SEPARADOR << endl;

    return;
}

int main() {
    // Da la bienvenida al usuario y te dice lo que hace el programa
    informacion_inicio();

    


    return 0;
}