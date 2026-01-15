/*
*   Solución al ejercicio 1 planteado por Gemini AI
*/

#include <iostream>
#include <cmath>

using namespace std;

constexpr int MAX = 10;
constexpr double PI = 3.14159265358979323846;

template <typename T, unsigned N>
void llenar_psi(const T l, const T h, T (&psi)[N]) {
    for (size_t i = 0; i < N; i++) {
        psi[i] = sin(PI * i * h / l);
    }
}

template <typename T, unsigned N>
void imprimir_psi(T (&psi)[N]) {
    cout << "\n[";
    for (size_t i = 0; i < N; i++) {
        cout << " " << psi[i] << " ";
    }
    cout << "]\n" << endl;
}

template <typename T, unsigned N>
void calcular_d2_psi(T (&d2_psi)[N], const T (&psi)[N], const T h) {
    for (size_t i = 1; i < N - 1; i++) {
        d2_psi[i] = (psi[i-1] - 2 * psi[i] + psi[i+1]) / (h * h);
    }
    d2_psi[0] = 0.0;
    d2_psi[N-1] = 0.0;
}

int main(int argc, char const *argv[])
{
    const double l = 1.0;
    double h = 0;
    double psi[MAX];
    double d2_psi[MAX] = {};

    h = l / (MAX - 1);

    llenar_psi(l, h, psi);

    imprimir_psi(psi);

    // calcular el laplaciano
    calcular_d2_psi(d2_psi, psi, h);

    imprimir_psi(d2_psi);

    
    return 0;
}
