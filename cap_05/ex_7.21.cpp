/*
 * Lectura y visualización de arreglos bidimensionales
 *
*/

#include <iostream>

using namespace std;


void leer(int a[][5]);
void visualizar(const int a[][5]);

int main () {
  int a[3][5];

  cout << endl;
  leer(a);
  cout << endl;
  visualizar(a);

  return 0;
}


void leer(int a[][5]) {
  cout << "Introduzca 15 números enteros, 5 por fila" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "Fila " << i << ": ";
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
    }
  }
}

void visualizar(const int a[][5]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout << " " << a[i][j];
    }
    cout << endl;
  }
}
