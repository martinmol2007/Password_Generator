#ifndef GENERADOR_HH
#define GENERADOR_HH

#include <vector>
#include <string>
#include <random>

class Password {
    private:
        // Para indicar si se puede pasar al proximo paso
        bool letras_minusculas_;
        bool letras_mayusculas_;
        bool numeros_;
        bool caracteres_especiales_;
        // Vector donde se va almacenando la contraseña
        std::vector<std::string> password_;
    public:

    Password();

    void completar_letras_minusuclas();
    void completar_letras_mayusculas();
    void completar_numeros();
    void completar_caracteres_especiales();

    void poner_caracter_vector(std::string s);

    bool is_letras_minusuculas() const;
    bool is_letras_mayusculas() const;
    bool is_numeros() const;
    bool is_caracteres_especiales() const;

    void generar_letras_minusculas(int num);
    void generar_letras_mayusculas(int num);
    void generar_numeros(int num);
    void generar_caracteres_especiales(int num);

    int generar_numero_random(int inicio, int fin) const;
    
};



#endif