/*
*   Crear un array dinámico y,  a continuación utilizar la notación de arrays
*   acceder a sus elementos
*/


#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    size_t len = 4;
    double *pd = new double[len];     // 4 elementos de tipo double
    double *aux = pd;   // copia de la direccion inicial

    pd[0] = 7.5;
    pd[1] = 4.25;
    pd[2] = 0.45;
    pd[3] = 1.23;

    cout << "\npd[1] es: " << pd[1] << "\n";
    aux = aux + 1;
    cout << "\nahora pd[1] es: " << aux[1] << endl;

    aux = pd;

    for (size_t i = 0; i < len; i++, aux++) {
        cout << *aux << endl;
    }
    
    delete [] pd;
    pd = nullptr;
    aux = nullptr;
    
    return 0;
}
