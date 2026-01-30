/*
    Se implementa una función para contar el número de caracteres de una cadena
        1. usando un arreglo
        2. utilizando un puntero.
*/


#include <iostream>
using namespace std;

int strlen(const char cad[]);

int main() {
    static char cad[] = "Universidad de Oriente";

    cout << "La longitud de " << cad << " es " << strlen(cad) << " caracteres." << endl;

    return 0;
}

int strlen(const char cad[]) {
    int position = 0;
    while (cad[position] != '\0') {
        position++;
    }
    return position;
}