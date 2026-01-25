/*
*   Declarando punteros
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int i;              // declara una variable entera i
    int *p;             // declara un puntero a un entero p;
    p = &i;             // asigna la dirección de i a p

    i = 99;

    cout << "\ni = " << i << ", &i: " << &i << ", p = " << p << ", &p: " << &p << endl;
    *p = 101;
    cout << "\ni = " << i << ", &i: " << &i << ", p = " << p << ", &p: " << &p << endl;

    return 0;
}
