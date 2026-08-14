#ifndef GENERADOR_HH
#define GENERADOR_HH

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

class Password {
    private:
        // Para indicar si se puede pasar al próximo paso
        bool letras_minusculas_;
        bool letras_mayusculas_;
        bool numeros_;
        bool caracteres_especiales_;

        // Vector donde se va almacenando la contraseña
        std::vector<char> password_;
    public:

    /**
     * @brief Constructor del objeto Password
     * 
     */
    Password();

    /**
     * @brief Marca como hecho el paso de las letras minusculas
     * 
     */
    void completar_letras_minusculas();

    /**
     * @brief Marca como hecho el paso de las letras mayusculas
     * 
     */
    void completar_letras_mayusculas();

    /**
     * @brief Marca como hecho el paso de los números
     * 
     */
    void completar_numeros();

    /**
     * @brief Marca como hecho el paso de los caracteres especiales
     * 
     */
    void completar_caracteres_especiales();

    /**
     * @brief Función que añade al vector el carácter c
     *
     * @param c Carácter, letra o número a añadir al vector
     */
    void poner_caracter_vector(char c);

    /**
     * @brief Mira si el paso de añadir las letras minúsculas está completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_letras_minusculas() const;

    /**
     * @brief Mira si el paso de añadir las letras mayúsculas está completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_letras_mayusculas() const;

    /**
     * @brief Mira si el paso de añadir los números está completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_numeros() const;

    /**
     * @brief Mira si el paso de añadir los caracteres especiales está completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_caracteres_especiales() const;

    /**
     * @brief Genera letras minúsculas aleatorias y las añade al vector
     * 
     * @param num Cantidad de letras minusculas a generar
     */
    void generar_letras_minusculas(int num);

    /**
     * @brief Genera letras mayúsculas aleatorias y las añade al vector
     * 
     * @param num Cantidad de letras mayusculas a generar
     */
    void generar_letras_mayusculas(int num);

    /**
     * @brief Genera números aleatorias y las añade al vector
     * 
     * @param num Cantidad de números a generar
     */
    void generar_numeros(int num);

    /**
     * @brief Genera caracteres especiales aleatorias y las añade al vector
     * 
     * @param num Cantidad de caracteres especiales a generar
     */
    void generar_caracteres_especiales(int num);

    /**
     * @brief Genera un número aleatorio
     * 
     * @param inicio Inicio del intervalo
     * @param fin Final del intervalo
     * @return int Número aleatorio generado
     */
    int generar_numero_random(int inicio, int fin) const;

    /**
     * @brief Muestra por pantalla la contraseña
     * 
     */
    void mostrar_password() const;

    /**
     * @brief Mezcla aleatoriamente un vector
     * 
     */
    void shuffle_vector();

    /**
     * @brief Devuelve el tamaño del vector
     * 
     * @return int Tamaño
     */
    int password_size() const;

};



#endif