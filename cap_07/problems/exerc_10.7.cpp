/*
*   Declarar una estructura para representar un punto en el espacio tridimensional 
    con un nombre. Declarar un puntero a la estructura que tenga la dirección de un 
    array dinámico de n estructuras punto. Asignar memoria al array y comprobar que 
    se ha podido asignar la memoria requerida.

    Programmer: Jose Alvarado
    Date: 03-02-2026
    Hour: 12:39 AM
    Cumaná, Venezuela
*/

#include <iostream>
#include <string>

using namespace std;

struct Punto {
    string nombre = "Por defecto";
    double x = 0.0, y = 0.0, z = 0.0;
    bool definido = false;
};

template <typename T>
void declarar_punto(T* array, size_t pos, T p) {
    array[pos] = p;
}


int main(int argc, char const *argv[])
{
    size_t n;

    cout << "\nIntroduzca la cantidad de puntos: ";
    cin >> n;

    Punto* puntos = nullptr;

    try {
        puntos = new Punto[n];
    } catch (const bad_alloc& e) {
        cerr << "Error de momoria: " << e.what() << endl;
        return 1;
    }

    // asignamos los datos
    Punto p1 = {"Origen", 0.0, 0.0, 0.0, true};
    declarar_punto(puntos, 0, p1);

    if (n > 1) {
        puntos[1] = {"Particula_A", 1.5, 2.0, -0.5};
        puntos[1].definido = true;
    }

    Punto *p = puntos;

    for (size_t i = 0; i < n; i++, p++) {
        if (p->definido) {
            cout << p->nombre << ": (" << p->x << ", " << p->y << ", " << p->z << ") " << endl;
        }
    }

    delete[] puntos;
    puntos = nullptr;
    p = nullptr;
    
    return 0;
}
