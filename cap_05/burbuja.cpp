/*
 * Implementación del método de ordenamiento por burbuja
 *
 * Date: 11-01-2025
 * Programmer: Jose Alvarado
 *
*/

#include <iostream>

using namespace std;

template <typename T>
void exchange(T (&x), T (&y)) {
  T aux;
  aux = x;
  x = y;
  y = aux;
}

// REvisar porque no ordena de forma adecuada el arreglo
template <typename T, unsigned N>
void sort_burbuja(T (&A)[N]) {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < i; j++) {
      if (A[j+1] < A[j]) exchange(A[j], A[j+1]);
    }
  }
}

template <typename T, unsigned N>
void print_array(T (&A)[N]) {
  int i;
  cout << endl;
  for (i = 0; i < N; i++) {
    cout << "\t" << A[i] << " "; 
  }
  cout << endl;
}


int main(int argc, char *argv[])
{
  int a[] = {13, 81, 92, 43, 65, 31, 57, 26, 75, 0};
  int n = 5;
  int i, j;

  cout << "(i," << "j," << "j+1)" << endl;
  for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++) {
    cout << "(" << i << ", " << j << ", " << (j+1) << ")" << endl;
    }
  }


  print_array(a);

  sort_burbuja(a);

  print_array(a);
  
  return 0;
}
