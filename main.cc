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
    cout << endl;

    return;
}

int main() {
    // Da la bienvenida al usuario y te dice lo que hace el programa
    informacion_inicio();

    Password password;
    int num;

    // Letras Minusculas
    cout << "Cuantas letras minusculas quieres en tu contraseña: ";
    while(not password.is_letras_minusuculas() && cin >> num)  {
        if(num >= 0) {
            password.generar_letras_minusculas(num);
        } else {
            cout << "Error, introduce un numero valido: ";
        }  
    }

    // Letras Mayusculas
    cout << "Cuantas letras mayusculas quieres en tu contraseña: ";
    while(not password.is_letras_mayusculas() && cin >> num)  {
        if(num >= 0) {
            password.generar_letras_mayusculas(num);
        } else {
            cout << "Error, introduce un numero valido: ";
        }  
    }    

    // Numeros
    cout << "Cuantos numeros quieres en tu contraseña: ";
    while(not password.is_numeros() && cin >> num)  {
        if(num >= 0) {
            password.generar_numeros(num);
        } else {
            cout << "Error, introduce un numero valido: ";
        }  
    } 

    // Caracteres especiales
    cout << "Cuantos caracteres especiales quieres en tu contraseña: ";
    while(not password.is_caracteres_especiales() && cin >> num)  {
        if(num >= 0) {
            password.generar_caracteres_especiales(num);
        } else {
            cout << "Error, introduce un numero valido: ";
        }  
    } 

    cout << endl;
    cout << "Tu contraseña es: ";
    password.mostrar_password();

    return 0;
}