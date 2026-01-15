/*
 * Inicialización de arrays bidimensionales en la declaración
 *
*/

#include <iostream>

using namespace std;

template <typename T, unsigned N, unsigned M>
void show_array_elements(const char* name, T (&arr)[N][M]);


int main(int argc, char *argv[])
{
  int ejemplo[2][3] = {1,2,3,4,5,6};
  int example[2][3] = { {1, 2, 3}, {4, 5, 6} };

  show_array_elements("ejemplo", ejemplo);
  show_array_elements("example", example);
  
  return 0;
}


template <typename T, unsigned N, unsigned M>
void show_array_elements(const char* name, T (&arr)[N][M])
{
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << name << "[" << i << "][" <<  j << "] = " << arr[i][j] << endl;
    }
  }
}
