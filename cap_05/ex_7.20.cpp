/*
 * Suma y multiplicación de matrices
 *
*/

#include <iostream>

using namespace std;

constexpr int MAX_F = 2;
constexpr int MAX_C = 2;


template <typename T, unsigned N, unsigned M>
void leer_matriz(const char* name, T (&A)[N][M]) {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) { 
      while (true) {
        cout << name << "[" << i << "][" << j << "] = ";
        if (cin >> A[i][j]) {
          break;
        } else {
          cout << "Error: invalid value, please try again and enter a number." << endl;
          cin.clear();
          cin.ignore(1000, '\n');
        }
      }
    }
  }
}

template <typename T, unsigned N, unsigned M>
void imprimir_matriz(const char* name, T (&A)[N][M]) {
  int i, j;
  cout << name << "[" << N << "][" << M << "]: " << endl;
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
}



template <typename T, unsigned N, unsigned M>
void suma_matriz1_matriz2(T (&S)[N][M], T (&A)[N][M], T (&B)[N][M]) {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      S[i][j] = A[i][j] + B[i][j];
    }
  }
}

template <typename T, unsigned N, unsigned M>
void producto_matriz1_matriz2(T (&P)[N][M], T (&A)[N][M], T (&B)[N][M]) {
  int i, j, k;
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      T acc = static_cast<T> (0);
      for (k = 0; k < N; k++) {
        acc += A[i][k] * B[k][j];
      }
      P[i][j] = acc;
    }
  }
}

int main(int argc, char *argv[])
{
  double a[MAX_F][MAX_C];
  double b[MAX_F][MAX_C];
  double s[MAX_F][MAX_C];
  double m[MAX_F][MAX_C];

  leer_matriz("A", a);
  leer_matriz("B", b);

  suma_matriz1_matriz2(s, a, b);
  producto_matriz1_matriz2(m, a, b);

  imprimir_matriz("A", a);
  imprimir_matriz("B", b);
  imprimir_matriz("S", s);
  imprimir_matriz("P", m);
 
  return 0;
}
