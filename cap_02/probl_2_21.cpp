#include <iostream>
using namespace std;

int main() {
  int fila = 10;
  int columna = 9;

  for (int i = 0; i < fila; i++) {
    cout << endl;
    for (int j = 0; j < columna; j++) {
      if ((i != 0 && i != fila - 1) && (j != 0 && j != columna - 1)) {
        cout << " ";
      } else {
        cout << "*";
      }

      if ((i == fila - 1) && (j == columna - 1)) {
        cout << endl;
      }
    }
  }

  return 0;
}
