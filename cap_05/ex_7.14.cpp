/*
 * Lectura escritura de un vector con funciones. El número de elementos del vector es 
 * indicado a cada función en el parámetro n, y el vector se declara en el parámetro 
 * con corchetes vacíos. El programa declara una constante max para dimensionar los 
 * vectores. Se codifican las funciones lee, escribe, que leen y escriben respectivamente 
 * un vector de n datos que reciben como parámetros, así como la función suma que recibe 
 * como parámetros dos vectores de n datos, y calcula el vector suma almacenado el 
 * resultado en c. El programa principal llama a las funciones anteriores.
 *
*/

#include <iostream>

using namespace std;


constexpr int MAX = 11;

void leer(float a[], int n);
void escribe(float a[], int n);
void suma(float a[], float b[], float c[], int n);


int main(int argc, char *argv[])
{
  int n;
  float a[MAX], b[MAX], c[MAX];

  n = 3;
  leer(a, n);
  leer(b, n);
  
  cout << " vector a\n";
  escribe(a, n);
  cout << " vector b\n";
  escribe(b, n);

  suma(a, b, c, n);
  cout << " vector suma\n";
  escribe(c, n);

  
  return 0;
}

void leer(float a[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    cout << " dame dato posicion i = " << i + 1 << " ";
    cin >> a[i];
  }
}

void escribe(float a[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    cout << a[i] << "   ";
  }
  cout << endl;
}

void suma(float a[], float b[], float c[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    c[i] = a[i] + b[i];
  }
}
