

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


constexpr int MAX = 10000;
constexpr double PI = 3.14159265358979323846;


struct Rejilla2D
{
    double psi[MAX][MAX];
    double laplaciano[MAX][MAX];
    double h;
    double l;
};


template <typename T, unsigned N, unsigned M>
void calcular_psi(T h, T l, T (&psi)[N][M]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < M; j++) {
            psi[i][j] = sin(PI * i *h / l) * sin(PI * j * h / l);
        }
    }
}


template <typename T, unsigned N, unsigned M>
void imprimir_psi(T (&psi)[N][M]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < M; j++) {
            cout << " " << psi[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename T, unsigned N, unsigned M>
void calcular_laplaciano_psi(T h, T (&psi)[N][M], T (&d2_psi)[N][M]) {
    for (size_t i = 1; i < N-1; i++) {
        for (size_t j = 1; j < M-1; j++) {
            d2_psi[i][j] = ( psi[i+1][j] + psi[i-1][j] + psi[i][j+1] + psi[i][j-1] - 4* psi[i][j] ) / (h * h);
        }
    }
}


int main(int argc, char const *argv[])
{
    struct Rejilla2D *r = new Rejilla2D();
    r->l = 1.0;
    r->h = r->l / (MAX -1);

    cout << fixed << setprecision(4) << endl;

    cout << "\n---- Función de Onda: psi(x,y) ----" << endl;
    calcular_psi(r->h, r->l, r->psi);

    imprimir_psi(r->psi);

    calcular_laplaciano_psi(r->h, r->psi, r->laplaciano);
    
    cout << "\n---- Laplaciano de la Función de Onda: psi(x,y) ----" << endl;
    imprimir_psi(r->laplaciano);

    cout << "\nCentro de la matriz: " << r->laplaciano[MAX/2][MAX/2] << endl;

    delete r;
    
    return 0;
}
