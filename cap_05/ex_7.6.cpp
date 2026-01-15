/*
 * Declaraciones e inicialización simultánea de arrays
 *
*/

#include <iostream>
#include <string>

using namespace std;

#define STRINGIFY(x) #x

template <typename T, unsigned int N>
void show_array_elements(const char* arr_name, T (&arr)[N]) {
  cout << "Long: " << N << endl;

  for (int i = 0; i < N; i++) {
    cout << arr_name << "[ " << i << " ] = " << arr[i] << endl;
  }
}


int main(int argc, char *argv[])
{
  int num[5] = {10, 20, 30, 40, 50};  // declara e inicializa un array de 5 enteros

  float x[] = {1.0, 22.0, 3.5};       // declara e inicializa un array de 3 reales
                                      
  // podemos asignar constantes simbólicas como valores numéricas
  const int ENE = 31, FEB = 28, MAR = 31, ABR = 30, MAY = 31, JUN = 30,
        JUL = 31, AGO = 31, SEP = 30, OCT = 31, NOV = 30, DIC = 31;

  int meses[12] = {ENE, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC};

  // mostrar elementos
  show_array_elements(STRINGIFY(num), num);
  show_array_elements(STRINGIFY(x), x);
  show_array_elements(STRINGIFY(meses), meses);
  
  return 0;
}
