/*
 * Almacenamiento en memoria de un array de de 5 elementos. Se declara el array de 5
 * elementos y se almacena en las posiciones de memoria los primeros 5 numeros pares
 * positivos.
 *
 * Date: 07-01-2026
 * Programmer: Jose Alvarado
 *
*/

#include <iostream>

using namespace std;

void fill_array(int n, int* arr);
void show_array_elements(int n,int* arr);

int main(int argc, char *argv[])
{
  const int N = 5;
  int arr[N];

  fill_array(N, arr);

  show_array_elements(N, arr);
  
  return 0;
}


void fill_array(int n, int* arr)
{
  for (int i = 0; i < n; i++) {
    arr[i] = 2*i + 2;
  }
}


void show_array_elements(int n,int* arr)
{
  for (int j = 0; j < n; j++) {
    cout << "array[" << j << "] = " << arr[j] << endl;
  }
}
