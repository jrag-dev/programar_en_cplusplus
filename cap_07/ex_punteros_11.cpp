/*
*   Punteros constantes
*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int x;
    int y;
    int *const p1 = &x;

    x = 10;
    y = 30;

    cout << "\nDirecciones: " << endl;
    cout << "x = " << &x << endl;
    cout << "y = " << &y << endl;
    cout << "p1 = " << p1 << endl;

    cout << "\nValores: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "*p1 = " << *p1 << endl;

    cout << endl << "Cambiando *p1 = y" << endl;

    *p1 = y;

    cout << "\nDirecciones: " << endl;
    cout << "x = " << &x << endl;
    cout << "y = " << &y << endl;
    cout << "p1 = " << p1 << endl;

    cout << "\nValores: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "*p1 = " << *p1 << endl;

    
    return 0;
}
