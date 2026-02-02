/*
*   Muestra la asignación dinámica de una cadena de caracteres
*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    string text;
    char *p = nullptr;      // Buena práctica: inicializar punteros a null

    cout << "Ingrese su dirección: ";
    getline(cin, text);             // Obtenemos toda la linea

    p = new char[text.length() + 1];    // Evitar asignacion por adivinación.

    strcpy(p, text.c_str());          // .c_str() nos devuelve el puntero interno de solo lectura

    cout << "Copia en memoria dinámica: " << p << endl;

    delete[] p;     // liberamos espacio de memoria
    p = nullptr;    // Buena práctica: Evitamos dejar punteros colgantes
    
    return 0;
}
