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
    void completar_letras_minusuclas();

    /**
     * @brief Marca como hecho el paso de las letras mayusculas
     * 
     */
    void completar_letras_mayusculas();

    /**
     * @brief Marca como hecho el paso de los numeros
     * 
     */
    void completar_numeros();

    /**
     * @brief Marca como hecho el paso de los caracteres especiales
     * 
     */
    void completar_caracteres_especiales();

    /**
     * @brief Funcion que añade al vector el caracter c
     * 
     * @param c Caracter, letra o numero a añadir al vector
     */
    void poner_caracter_vector(char c);

    /**
     * @brief Mira si el paso de añadir las letras minusculas esta completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_letras_minusuculas() const;

    /**
     * @brief Mira si el paso de añadir las letras mayusculas esta completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_letras_mayusculas() const;

    /**
     * @brief Mira si el paso de añadir los numeros esta completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_numeros() const;

    /**
     * @brief Mira si el paso de añadir los caracteres especiales esta completado
     * 
     * @return true Esta completado
     * @return false Falta por hacer
     */
    bool is_caracteres_especiales() const;

    /**
     * @brief Genera letras minusculas aleatorias y las añade al vector
     * 
     * @param num Cantidad de letras minusculas a generar
     */
    void generar_letras_minusculas(int num);

    /**
     * @brief Genera letras mayusculas aleatorias y las añade al vector
     * 
     * @param num Cantidad de letras mayusculas a generar
     */
    void generar_letras_mayusculas(int num);

    /**
     * @brief Genera numeros aleatorias y las añade al vector
     * 
     * @param num Cantidad de numeros a generar
     */
    void generar_numeros(int num);

    /**
     * @brief Genera caracteres especiales aleatorias y las añade al vector
     * 
     * @param num Cantidad de caracteres especiales a generar
     */
    void generar_caracteres_especiales(int num);

    /**
     * @brief Genera un numero aleatorio
     * 
     * @param inicio Inicio del intervalo
     * @param fin Final del intervalo
     * @return int Numero aleatorio generado
     */
    int generar_numero_random(int inicio, int fin) const;

};



#endif