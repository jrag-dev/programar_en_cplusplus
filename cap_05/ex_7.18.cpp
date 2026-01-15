
#include <iostream>

using namespace std;

constexpr int MAX = 10;

template <typename T, unsigned N>
void leer_arreglo(T (&A)[N]) {
  int i;
  for (i = 0; i < N; i++) {
    cout << " element i = " << i << " -> "; 
    cin >> A[i];
  }
  cout << endl;
}

template <typename T, unsigned N>
void imprimir_arreglo(T (&A)[N]) {
  int i;
  for (i = 0; i < N; i++) {
    cout << A[i] << " ";
  }
  cout << "\n" << endl;
}

template <typename T, unsigned N>
T media_cuadratica(T (&A)[N]) {
  int i;
  T acc = 0;
  for (i = 0; i < N; i++) {
    acc += A[i] * A[i];
    cout << acc << " - ";
  }


  return (acc / N);
}

template <typename T, unsigned N>
T media_armonica(T (&A)[N]) {
  int i;
  T acc = 0;
  for (i = 0; i < N; i++) {
    acc += 1 / A[i];
  }

  return (N / acc);
}

template <typename T>
void imprimir_media(const char* name,T value) {
  cout << "\nLa media " << name << " es: " << value << endl;
}


int main(int argc, char *argv[])
{
  float a[MAX];
  float mc;
  float ma;

  leer_arreglo(a);
  cout << endl;

  imprimir_arreglo(a);
  cout << endl;

  mc = media_cuadratica(a);
  ma = media_armonica(a);

  imprimir_media("cuadrática", mc);
  imprimir_media("armónica", ma);
  
  return 0;
}
