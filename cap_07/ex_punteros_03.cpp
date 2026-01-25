/*
*   Declarando punteros
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int n = 75;
    int* p = &n;         // p contiene la dirección de n

    cout << "n = " << n << ", &n: " << &n << ", p: " << p << endl;

    cout << "&p = " << &p << endl;

    return 0;
}
