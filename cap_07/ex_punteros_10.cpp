/*
*   Aritmetica de punteros
*/

#include <iostream>
using namespace std;


int my_strlen(const char* cad) {
    int counter = 0;
    while (*cad++) {
        counter++;
    }
    return counter;
}


int main(int argc, char const *argv[])
{
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p = &alfabeto[0];

    // Opción A: Usando un bucle for
    int i;
    cout << endl;
    for (i = 0; i <= my_strlen(alfabeto); i++) {
        cout << *p << " ";
        p++;
    }
    cout << endl << "---" << endl;


    // Opción B: Usando puntero puro (más eficiente y limpio)
    p = alfabeto;
    cout << endl;
    while (*p) {
        cout << *p++ << " ";
    }
    cout << endl << "---" << endl;
    
    return 0;
}
