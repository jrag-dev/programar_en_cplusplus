/*
*   Muestra un puntero que recorre una cadena de caracteres y convierte cualquier
*   carácter en minúsculas a caracteres mayúsculas.
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    char *p;
    char cadena_texto[80];

    cout << "Introduzca cadena a convertir: ";
    cin.getline(cadena_texto, sizeof(cadena_texto));

    // p apunta al primer carácter de la cadena
    p = &cadena_texto[0];

    // repetir mientras *p no sea cero
    while (*p) {
        // restar 32, constante e código ASCII
        if ((*p >= 'a' && (*p <= 'z'))) {
            *p = *p - 32;
            *p++; 
        } else {
            p++;
        }
    }

    cout << "La cadena convertida es: " << endl;
    cout << cadena_texto << endl;

    cout << "Pulse Intro(Enter) para continuar";
    cin.get();
    
    return 0;
}
