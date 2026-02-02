/*
*   Reservar memoria para una estructura; rellenar sus campos y visualizar y liberar la memoria
*   reservada.
*/

#include <iostream>
#include <cstring>
#include <string>
#include <limits>
using namespace std;


struct ficha_p {
    int numero;
    char *nombre;
};

int main(int argc, char const *argv[])
{
    ficha_p  *una_ficha = nullptr;
    una_ficha = new ficha_p;
    string nombre_temp;

    cout << "Introduzca el número del cliente: ";
    cin >> una_ficha->numero;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Introduzca un numbre: ";
    getline(cin, nombre_temp);

    una_ficha->nombre = new char[nombre_temp.length() + 1];

    strcpy(una_ficha->nombre, nombre_temp.c_str());

    cout << "\n--- Datos Almacenados ---";
    cout << "\nNúmero: " << una_ficha->numero;
    cout << "\nNombre: " << una_ficha->nombre << endl;

    delete[] una_ficha->nombre;
    delete una_ficha;

    una_ficha = nullptr;
    
    return 0;
}
