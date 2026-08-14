# Generador de contraseñas

Pequeño generador de contraseñas por consola, escrito en C++ aplicando POO. El programa pide cuántas letras minúsculas, mayúsculas, números y símbolos especiales quieres, genera cada tipo de carácter de forma aleatoria y baraja el resultado para formar la contraseña final.


## Requisitos

- Compilador de C++ compatible con C++17  (`g++`).
- `make`.

## Compilar y ejecutar

```bash
make run
```

Esto compila el proyecto (si hace falta) y ejecuta `./main.exe`.

Otros comandos disponibles:

```bash
make          # compila main.exe
make clean    # borra el binario compilado
```

## Uso

Al ejecutar el programa, se te pedirá la cantidad de cada tipo de carácter que quieres incluir en la contraseña:

```
===============================================================
Bienvenido a mi generador de contraseñas!
En este pequeño programa, podrás generar contraseñas dado unos parámetros.
El programa te pedirá:
- Cantidad de letras minúsculas que quieres
- Cantidad de letras mayúsculas que quieres
- Cantidad de números que quieres
- Símbolos especiales (&, #,...) que quieres
===============================================================

Cuántas letras minúsculas quieres en tu contraseña: 4
Cuántas letras mayúsculas quieres en tu contraseña: 2
Cuántos números quieres en tu contraseña: 2
Cuántos caracteres especiales quieres en tu contraseña: 1

Tu contraseña es: aB3f#c92
```

> [!WARNING]
> **Entrada no numérica rompe el flujo del programa.** Si en cualquiera de las 4 preguntas introduces algo que no sea un número (por ejemplo una letra), `cin` se queda en estado de fallo permanente. A partir de ahí, todas las preguntas siguientes se saltan en silencio sin pedir nada, y el programa termina generando una contraseña incompleta o vacía o errónea, sin avisar del motivo. 

## Estructura del proyecto

La clase `Password` acumula los caracteres pedidos en un `std::vector<char>` y expone un método por cada tipo de carácter (`generar_letras_minusculas`, `generar_letras_mayusculas`, `generar_numeros`, `generar_caracteres_especiales`), además de `shuffle_vector()` para mezclarlos antes de mostrar el resultado.


