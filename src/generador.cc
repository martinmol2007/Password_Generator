#include"../include/generador.hh"

using namespace std;

// Contraseña vacía y ningún paso completado todavía
Password::Password() {
    letras_minusculas_ = false;
    letras_mayusculas_ = false;
    numeros_ = false;
    caracteres_especiales_ = false;
    password_ = vector<char> ();
}

// Marcan cada paso como completado
void Password::completar_letras_minusculas() {
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

// Añade un carácter al vector de la contraseña
void Password::poner_caracter_vector(char c) {
    password_.push_back(c);

    return;
}

// Consultan si cada paso ya está completado
bool Password::is_letras_minusculas() const {
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

// Genera "veces" letras minúsculas aleatorias (ASCII 97-122) y las añade
void Password::generar_letras_minusculas(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(97, 122);
        char c = static_cast<char>(num);
        poner_caracter_vector(c);
    }
    completar_letras_minusculas();

    return;
}

// Genera "veces" letras mayúsculas aleatorias (ASCII 65-90) y las añade
void Password::generar_letras_mayusculas(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(65, 90);
        char c = static_cast<char>(num);
        poner_caracter_vector(c);
    }
    completar_letras_mayusculas();

    return;
}

// Genera "veces" dígitos aleatorios (0-9) y los añade
void Password::generar_numeros(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(0, 9);
        poner_caracter_vector(num + '0');
    }
    completar_numeros();

    return;
}

// Genera "veces" símbolos aleatorios (ASCII 35-38: # $ % &) y los añade
void Password::generar_caracteres_especiales(int veces) {
    for(int i = 0; i < veces; i++) {
        int num = generar_numero_random(35, 38);
        char c = static_cast<char>(num);
        poner_caracter_vector(c);
    }
    completar_caracteres_especiales();

    return;
}


// Número aleatorio entre inicio y fin, ambos incluidos
int Password::generar_numero_random(int inicio, int fin) const {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(inicio, fin);
    return dis(gen);
}

// Imprime la contraseña generada por pantalla
void Password::mostrar_password() const {
    for(int i = 0; i < int(password_.size()); i++) {
        cout << password_[i];
    }
    cout << endl;

    return;
}

// Reordena aleatoriamente los caracteres ya generados
void Password::shuffle_vector() {
    random_device rd;
    mt19937 gen(rd());
    shuffle(password_.begin(), password_.end(), gen);

    return;
}

// Cuántos caracteres lleva la contraseña hasta ahora
int Password::password_size() const {
    return password_.size();
}