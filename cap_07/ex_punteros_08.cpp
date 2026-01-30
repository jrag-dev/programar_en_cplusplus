/* 
    Punteros de cadena
*/

#include <iostream>
using namespace std;

int main() {
    char alfabeto[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p;

    p = &alfabeto[0];

    cout << *p << endl;

    p = &alfabeto[15];

    cout << *p << endl;

    p = alfabeto;

    cout << *p << endl;

    return 0;
}