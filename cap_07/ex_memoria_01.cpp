/*
*   Demo sobre el uso de new y delete
*/


#include <iostream>
#include <cstring>
using namespace std;


int main(int argc, char const *argv[])
{
    const char *cad = "Sierras de Cazorla, Segura y Magina";
    int lon = strlen(cad);

    char *ptr;
    ptr = new char[lon+1];

    strcpy(ptr, cad);

    cout << endl << "ptr = " << ptr << endl;

    // Liberamos memoria
    delete[] ptr;

    // Buena práctica: apuntar a nullptr tras borrar para evitar punteros colgantes
    ptr = nullptr;
    
    return 0;
}
