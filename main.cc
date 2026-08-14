#include "include/generador.hh"

#include <iostream>
#include <string>
#include <random>

using namespace std;

const string SEPARADOR(63, '=');

// Imprime el mensaje de bienvenida y las instrucciones iniciales
void informacion_inicio() {
    cout << SEPARADOR << endl;
    cout << "Bienvenido a mi generador de contraseñas!" << endl;
    cout << "En este pequeño programa, podrás generar contraseñas dado unos parámetros." << endl;
    cout << "El programa te pedirá:" << endl;
    cout << "- Cantidad de letras minúsculas que quieres" << endl;
    cout << "- Cantidad de letras mayúsculas que quieres" << endl;
    cout << "- Cantidad de números que quieres" << endl;
    cout << "- Símbolos especiales (@, #,...) que quieres" << endl;
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
    cout << "Cuántas letras minúsculas quieres en tu contraseña: ";
    while(not password.is_letras_minusculas() && cin >> num)  {
        if(num >= 0) {
            password.generar_letras_minusculas(num);
        } else {
            cout << "Error, introduce un número válido: ";
        }  
    }

    // Letras Mayusculas
    cout << "Cuántas letras mayúsculas quieres en tu contraseña: ";
    while(not password.is_letras_mayusculas() && cin >> num)  {
        if(num >= 0) {
            password.generar_letras_mayusculas(num);
        } else {
            cout << "Error, introduce un número válido: ";
        }  
    }    

    // Números
    cout << "Cuántos números quieres en tu contraseña: ";
    while(not password.is_numeros() && cin >> num)  {
        if(num >= 0) {
            password.generar_numeros(num);
        } else {
            cout << "Error, introduce un número válido: ";
        }  
    } 

    // Caracteres especiales
    cout << "Cuántos caracteres especiales quieres en tu contraseña: ";
    while(not password.is_caracteres_especiales() && cin >> num)  {
        if(num >= 0) {
            password.generar_caracteres_especiales(num);
        } else {
            cout << "Error, introduce un número válido: ";
        }  
    } 

    // Solo mezcla y muestra si se ha generado al menos un carácter
    if(password.password_size() > 0) {
        // Mezcla todo para que sea completamente aleatorio
        password.shuffle_vector();

        // Muéstralo por pantalla
        cout << endl;
        cout << "Tu contraseña es: ";
        password.mostrar_password();
    } else {
        cout << "Error, prueba de nuevo" << endl;
    }
    

    return 0;
}