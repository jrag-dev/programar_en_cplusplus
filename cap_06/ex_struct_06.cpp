/*
*   Diseñar una estructura Punto (coordenadas en 3 dimensiones x, y, z) que proporcione dos 
*   funciones miembro Sumar() y Restar() que suman y restan, respectivamente, dos objetos 
*   de tipo Punto:
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Punto
{
    double x, y, z;

    Punto(double _x = 0.0, double _y = 0.0, double _z = 0.0) : x(_x), y(_y), z(_z) {}

    void sumar(const Punto& p)
    {
        x += p.x;
        y += p.y;
        z += p.z;
    }
    
    void restar(const Punto& p1, const Punto& p2)
    {
        x = p1.x - p2.x;
        y = p1.y - p2.y;
        z = p1.z - p2.z;
    }

    double magnitud() const {
        return sqrt(x*x + y*y + z*z);
    }
};


void imprimir_punto(Punto (&p))
{
    cout << fixed << setprecision(2);
    cout << "p.x: " << p.x << endl;
    cout << "p.y: " << p.y << endl;
    cout << "p.z: " << p.z << endl;
}


int main(int argc, char const *argv[])
{
    Punto* p1 = new Punto();
    Punto* p2 = new Punto();
    Punto* p3 = new Punto();
    Punto* p4 = new Punto();

    p1->x = 1.0; p1->y = 2.0; p1->z = 3.0;
    p2->x = 8.0; p2->y = 9.0; p2->z = 10.0;
    p3->x = 0.0; p3->y = 0.0; p3->z = 0.0;
    p4->x = 0.0; p4->y = 0.0; p4->z = 0.0;

    cout << "\nP3 -> Antes: " << endl;
    imprimir_punto(*p3);

    p1->sumar(*p2);

    p3 = p1;

    cout << "\nP3 -> Despues: " << endl;
    imprimir_punto(*p3);
    
    cout << "\nP4 -> Antes: " << endl;
    imprimir_punto(*p4);

    p4->restar(*p1, *p2);

    cout << "\nP4 -> Despues: " << endl;
    imprimir_punto(*p4);


    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
