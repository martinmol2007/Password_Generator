#include"../include/generador.hh"

using namespace std;

Password::Password() {
    letras_minusculas_ = false;
    letras_mayusculas_ = false;
    numeros_ = false;
    caracteres_especiales_ = false;
    password_ = vector<char> ();
}

void Password::completar_letras_minusuclas() {
    letras_minusculas_ = true;

    return;
}

void Password::completar_letras_mayusculas() {
    letras_mayusculas_ = true;

    return;
}

void Password::completar_numeros() {
    numeros_ = true;

    return;
}

void Password::completar_caracteres_especiales() {
    caracteres_especiales_ = true;

    return;
}

void Password::poner_caracter_vector(char c) {
    password_.push_back(c);

    return;
}

bool Password::is_letras_minusuculas() const {
    return letras_minusculas_;
}

bool Password::is_letras_mayusculas() const {
    return letras_mayusculas_;
}

bool Password::is_numeros() const {
    return numeros_;
}

bool Password::is_caracteres_especiales() const {
    return caracteres_especiales_;
}

void Password::generar_letras_minusculas(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(97, 122);
        char c = static_cast<char>(num);
        poner_caracter_vector(c);
    }
    completar_letras_minusuclas();

    return;
}

void Password::generar_letras_mayusculas(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(65, 90);
        char c = static_cast<char>(num);
        poner_caracter_vector(c);
    }
    completar_letras_mayusculas();

    return;
}

void Password::generar_numeros(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(0, 9);
        poner_caracter_vector(num + '0');
    }
    completar_numeros();

    return;
}

void Password::generar_caracteres_especiales(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(35, 38);
        char c = static_cast<char>(num);
        poner_caracter_vector(c);
    }
    completar_caracteres_especiales();

    return;
}


int Password::generar_numero_random(int inicio, int fin) const {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(inicio, fin);
    return dis(gen);
}