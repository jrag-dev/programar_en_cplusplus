/* Implementación de un algoritmo para obtener si un número es primo
 *
 * Jose Alvarado
 * 2025-12-03
 *
 */

#include <iostream>

using namespace std;

int main() {
  int num;       // number that we want to find if is prime
  int count = 0; // count the numbers of divisors of num

  cout << "Enter an integer: ";
  cin >> num;

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << "i: " << i << endl;
      count++;
    }
  }

  if (count < 2 || count > 2) {
    cout << "The number: " << num << " isn't a prime number." << endl;
  } else {
    cout << "The number: " << num << " is a prime number." << endl;
  }

  cout << "\nCounter is: " << count << endl;
  cout << "FIN." << endl;

  return 0;
}
