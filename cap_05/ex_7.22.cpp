/*
 * Paso de arrays a funciones
 *
*/

#include <iostream>

using namespace std;

constexpr int LONG = 100;

void read_array(double [], int&);
void print_array(const double [], const int);


int main() {
  double a[LONG];
  int n;
  
  read_array(a, n);
  
  cout << "\nEl array tiene " << n << " elementos\nSon: \n";

  print_array(a, n);
}

void read_array(double a[], int& n) {
  n = 0;
  cout << "Introduzca datos. Para terminar pulsar 0:\n";
  for (n = 0; n < LONG; n++) {
    cout << n << ": ";
    cin >> a[n];
    if (a[n] == 0) break;
  }
}

void print_array(const double a[], const int n) {
  for (int i = 0; i < n; i++) {
    cout << " " << i << ":" << "\t" << a[i] << endl;
  }
}
