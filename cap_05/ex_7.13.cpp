/*
 * Array tridimensional
 * Se declara un array tridimensional para almacenar las temperaturas de cada uno 
 * de los 60 minutos de las 24 horas de un mes de 31 días. Se declaran como constantes 
 * dias, horas y minutos. En tres bucles anidados se leen la temper atura de cada uno 
 * de los 60 minutos, de las 24 horas, de los 31 días de un mes. Posteriormente, se 
 * calcula y se escribe la media de temper atura de cada día
*/


#include <iostream>

using namespace std;

constexpr int DIAS = 31;
constexpr int HORAS = 24;
constexpr int MINUTOS = 60;


template <typename T, unsigned N, unsigned M, unsigned P>
void print_array_tridimentional(T (&A)[N][M][P]) {
  int i, j, k;
  char separador = '|';
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      for (k = 0; k < P; k++) {
        cout << "A[" << i << "][" << j << "][" << k << "] = " << A[i][j][k] << "\t" << separador;
      }
    }
  }
}


int main(int argc, char *argv[])
{
  int i, j, k;
  float A[DIAS][HORAS][MINUTOS];

  for (i = 0; i < DIAS; i++) {
    for (j = 0; j < HORAS; j++) {
      for (k = 0; k < MINUTOS; k++) {
        cout << "A[" << i << "][" << j << "][" << k << "] = ";
        cin >> A[i][j][k];
      }
    }
  }

  cout << "\n" << endl;
  
  print_array_tridimentional(A);

  return 0;
}
