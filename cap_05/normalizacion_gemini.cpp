/*
*   Ejercicio 2: Producto Punto y Normalización
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

constexpr int MAX = 3;


template <typename T, unsigned N>
void leer_vector(T (&A)[N])
{
    for (size_t i = 0; i < N; i++) {
        while (true) {
            if (cin >> A[i]) {
                break;
            } else {
                cout << "Error: ingrese un número. Intenta nuevamente." << endl;      
                cin.clear();
                cin.ignore(1000, '\n');
            }
        };
    }
}

template <typename T, unsigned N>
T producto_escalar(const T (&A)[N], const T (&B)[N])
{
    T pe = 0;
    for (size_t i = 0; i < N; i++) {
        pe += A[i] * B[i];
    }
    return pe;
}

template <typename T, unsigned N>
T calcular_norma(const T (&A)[N]) {
    T norma = 0;
    T suma_cuadrados = 0;
    suma_cuadrados = producto_escalar(A, A);
    norma = sqrt(suma_cuadrados);

    return norma;
}

template <typename T, unsigned N>
void normalizar_vector(const T norma, T (&A)[N]) {
    if (norma < 1e-18) {
        cout << "Advertencia: No se puede normalizar un vector nulo." << endl;
        return;
    }
    for (size_t i = 0; i < N; i++) {
        A[i] /= norma;
    }
}

template <typename T, unsigned N>
void imprimir_vector(const T (&A)[N]) {
    cout << "[";
    for (size_t i = 0; i < N; i++) {
        cout << " " << A[i] << " ";
    }
    cout << "]" << endl;
}


int main(int argc, char const *argv[])
{
    double a[MAX], b[MAX];
    double peab = 0;
    double norma_a = 0;
    double norma_b = 0;
    double an[MAX], bn[MAX]; // -> En lugar de normalizar a y b, podria copiar a an y bn y normalizar estos. 

    cout << fixed << setprecision(4) << endl;

    cout << "Leer primer vector: " << endl;
    leer_vector(a);

    cout << "Leer segundo vector: " << endl;
    leer_vector(b);

    // calculamos el producto escalar
    peab = producto_escalar(a, b);

    cout << "\nEl producto escalar es: " << peab << endl;

    // calculamos la norma del vector
    norma_a = calcular_norma(a);
    cout << "\nLa norma de a es: " << norma_a << endl;    
    
    // calculamos la norma del vector
    norma_b = calcular_norma(b);
    cout << "\nLa norma de b es: " << norma_b << endl;    

    // normaizamos a
    normalizar_vector(norma_a, a);
    
    // normaizamos b
    normalizar_vector(norma_b, b);

    // imprimimos a y b;
    cout << endl;
    imprimir_vector(a);

    imprimir_vector(b);
    
    return 0;
}
