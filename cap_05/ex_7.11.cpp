/* Ejemplo tomado del libro usado en este repositorio.
 *
 * Lectura y visualización de un array de 3 filas y 5 columnas. se declaran
 * las constantes MAX_F y MAX_C a 5 y, posteriormente, se declara el array 
 * bidimensional a y se lee y visualiza por filas.
 *
 * Mejoras:
 *  - modularización (uso de funciones para cada tarea)
 *  - manejo de errores durante la lectura de datos
 *
 * Date: 08-01-2026
 * Programmer: Jose Alvarado
 * 
*/

#include <iostream>
#include <iomanip>

using namespace std;

constexpr int MAX_F = 3;
constexpr int MAX_C = 5;

template <typename T, unsigned N, unsigned M>
void read_bidimensional_array(T (&arr)[N][M])
{
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++) {
      while (true) {
        cout << "A[" << i << "][" << j << "] = ";
        if (cin >> arr[i][j]) {
          break; // entrada válida
        } else {
          cout << "Dato no valido. Por favor, ingrese un número." << endl;
          cin.clear();
          cin.ignore(1000, '\n');
        }
      }
    }
  }
}

template <typename T, unsigned N, unsigned M>
void print_bidimensional_array(T (&arr)[N][M])
{
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << "A[" << i << "][" << j << "] = " << arr[i][j] << endl;
    }
  }
  cout << endl;
}

template <typename T, unsigned N, unsigned M>
void show_bidimensional_array(T (&arr)[N][M])
{
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << right << setw(10) << fixed << setprecision(2) << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int main(int argc, char *argv[])
{
  float a[MAX_F][MAX_C];
  int f, c;

  // leer el array
  read_bidimensional_array(a); 

  // imprimir los elementos del arreglo bidimensional
  print_bidimensional_array(a);

  // mostrar la matriz
  show_bidimensional_array(a);
  
  return 0;
}
