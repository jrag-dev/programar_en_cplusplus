/*
*   Utilización de referencias
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 75;
    int p = n;
    int& r = n;

    cout << "\nn = " << n << ", p = " << p <<  ", r = " << r << endl;

    n += 10;

    cout << "\nn = " << n << ", p = " << p <<  ", r = " << r << endl;
    cout << "\nDireccion es de memoria: " << endl;
    cout << "n: " << &n << endl;
    cout << "p: " << &p << endl;
    cout << "r: " << &r << endl;


    /*
    n = 75, p = 75, r = 75
    n = 85, p = 75, r = 85
    Direccion es de memoria: 
    n: 0x7ffd54645bc0
    p: 0x7ffd54645bc4
    r: 0x7ffd54645bc0
    */

    
    return 0;
}
