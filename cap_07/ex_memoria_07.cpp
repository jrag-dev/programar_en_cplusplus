/*
*   Gestión de desbordamiento de memoria
*/

#include <iostream>

using namespace std;


void desborde();

int main(int argc, char const *argv[])
{
    void desborde();
    set_new_handler (desborde);
    long len;
    int nbloque;
    int *dir;

    cout << "¿Tamaño (longitud) deseado?";
    cin >> len; 

    for (nbloque = 1; ; nbloque++) {
        dir = new int[len];
        cout << "Asignación bloque número: " << nbloque << endl;
    }
    
    return 0;
}


void desborde() {
    cout << "Memoria insuficiente para ejecución " << endl;
    exit(1);
}