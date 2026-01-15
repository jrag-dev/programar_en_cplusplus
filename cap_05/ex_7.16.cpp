/*
 * Las funciones cero y resta, reciben como parámetros vectores, pero el número de elementos 
 * del vector a tratar viene dado por la constante global max que es usada para el control 
 * de los bucles internos. En los parámetros de las funciones el vector se declar a con el 
 * número de elementos que tiene mediante la constante max entre corchetes. La función cero 
 * rellena de ceros el vector. La función resta calcula la diferencia de los vectores que 
 * recibe como parámetro.
 *
*/

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
void cero(T (&A)[N]) {
  int i;
  for (i = 0; i < N; i++) {
    A[i] = static_cast<T> (0);
  }
}

template <typename T, unsigned N>
void resta(T (&A)[N], T (&B)[N], T (&C)[N]) {
  int i;
  for (i = 0; i < N; i++) {
    C[i] = A[i] - B[i];
  }
}

template <typename T, unsigned N>
void imprimir_arreglo(T (&A)[N]) {
  int i;
  for (i = 0; i < N; i++) {
    cout << A[i] << " ";
  }
  cout << "\n" << endl;
}

int main(int argc, char *argv[])
{
  float a[MAX], b[MAX], c[MAX];

  leer_arreglo(a);
  leer_arreglo(b);

  cout << endl;

  imprimir_arreglo(a);
  imprimir_arreglo(b);

  cout << endl;

  cero(a);

  imprimir_arreglo(a);
  imprimir_arreglo(b);

  resta(a, b, c);

  imprimir_arreglo(a);
  imprimir_arreglo(b);
  imprimir_arreglo(c);
  
  return 0;
}
