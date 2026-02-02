/*
*   Asignación dinámica de una cadena de caracteres
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    string text;
    int len_cadena;
    char *p = nullptr;
    char *pr = nullptr;

    cout << "¿Cuántos caracteres se asignan?";
    cin >> len_cadena;
    cin.ignore(1);

    p = new char[len_cadena + 1];

    cout << "\nIngrese su profesión: ";
    getline(cin, text);

    pr = new char[text.length() + 1];

    strcpy(p, text.c_str());
    strcpy(pr, text.c_str());

    // imprimir resultados
    cout << "\np: " << p << endl;
    cout << "pr: " << pr << endl;


    // liberar memoria
    delete[] p;
    delete[] pr;
    p = nullptr;
    pr = nullptr;
 
    return 0;
}
