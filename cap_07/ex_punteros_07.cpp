/*
*   Cambiar punteros
*/

#include <iostream>
using namespace std;


int main()
{
    float v1 = 756.423;
    float v2 = 900.545;
    float *p_v;

    p_v = &v1;
    cout << "\nLa dirección de la primera varible (v1) es: " << p_v << endl;
    cout << "El valor de la primera variable (v1) es: " << *p_v << endl;

    p_v = &v2;
    cout << "\nLa dirección de la segunda varible (v2) es: " << p_v << endl;
    cout << "El valor de la segunda variable (v2) es: " << *p_v << endl;

    return 0;
}

