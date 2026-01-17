/*
*   Ejemplos de declaración de estructuras en c++
*
*   Date: 15-01-2026
*   Programmer: Jose Alvarado
*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct mi_automovil
{
    double potencia_cv;
    string color;
    string modelo;    
    int anyo;
    int puertas;
};

struct Motocicleta
{
    double potencia;
    string modelo;
    string color;
    int ruedas;
};

void imprimir_moto(Motocicleta m)
{
    cout << "Modelo: " << m.modelo << endl;
    cout << "Color: " << m.color << endl;
    cout << "Potencia: " << m.potencia << endl;
    cout << "Ruedas: " << m.ruedas << endl;
}

void imprimir(const Motocicleta &m)
{
    cout << "Modelo: " << m.modelo << endl;
    cout << "Color: " << m.color << endl;
    cout << "Potencia: " << m.potencia << endl;
    cout << "Ruedas: " << m.ruedas << endl;
}

void imprimir(const Motocicleta *m)
{
    cout << "Modelo: " << m->modelo << endl;
    cout << "Color: " << m->color << endl;
    cout << "Potencia: " << m->potencia << endl;
    cout << "Ruedas: " << m->ruedas << endl;
}

int main(int argc, char const *argv[])
{
    mi_automovil mi_auto;
    Motocicleta moto_estatica;
    Motocicleta *moto_dinamica = new Motocicleta();

    mi_auto.anyo = 2008;
    mi_auto.puertas = 4;
    mi_auto.color = "negro";
    mi_auto.potencia_cv = 150;
    mi_auto.modelo = "J-150X";

    cout << "\nDatos del mi automovil: " << endl;
    cout << "Modelo: " << mi_auto.modelo << endl;
    cout << "Color: " << mi_auto.color << endl;
    cout << "Año: " << mi_auto.anyo << endl;
    cout << "Nro de puertas: " << mi_auto.puertas << endl;
    cout << "Potencia: " << mi_auto.potencia_cv << endl;

    // Definiendo el objeto moto
    moto_estatica.modelo = "BMW";
    moto_estatica.color = "Negra";
    moto_estatica.ruedas = 2;
    moto_estatica.potencia = 220;

    moto_dinamica->modelo = "Bera-J180";
    moto_dinamica->color = "Azul";
    moto_dinamica->potencia = 180;
    moto_dinamica->ruedas = 2;

    cout << "\nDatos de mi motocicleta: " << endl;
    cout << "Modelo: " << moto_dinamica->modelo << endl;
    cout << "Color: " << moto_dinamica->color << endl;
    cout << "Potencia: " << moto_dinamica->potencia << endl;
    cout << "Ruedas: " << moto_dinamica->ruedas << endl;

    cout << "\nLlamado con objeto estático: " << endl;
    imprimir_moto(moto_estatica);

    cout << "\nLlamado con puntero dinámico (desreferenciado): " << endl;
    imprimir(*moto_dinamica);

    cout << "\nLlamado por puntero dinámico (como puntero): " << endl;
    imprimir(moto_dinamica);

    delete moto_dinamica;
    
    return 0;
}
