/*
*   Declarando punteros
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int edad = 50;              // declara una variable de valor 50
    int *p_edad = &edad;        // declara un puntero de tipo entero

    char *p;                    // declara un puntero de tipo caracter
    char alfa = 'A';            // declara una varible de tipo caracter con valor 'A'
    p = &alfa;                  // asigna la dirección de memoria de alfa a p


    cout << "\nedad = " << edad << ", &edad: " << &edad << ", edad_p = " << p_edad << ", *p_edad: " << *p_edad 
         << ", &p_edad = " << &p_edad << ", alfa = " << alfa << ", &alfa = " << static_cast<void*>(&alfa) << endl;

    cout << "\nedad = " << edad << ", &edad: " << &edad << ", edad_p = " << p_edad << ", *p_edad: " << *p_edad 
         << ", &p_edad = " << &p_edad << ", alfa = " << alfa << ", &alfa = " << static_cast<void*>(&alfa) << endl;

    return 0;
}
