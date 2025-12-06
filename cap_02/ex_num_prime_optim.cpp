/* Implementación de un algoritmo para obtener si un número es primo
 * Optimizado
 *
 * Jose Alvarado
 * 2025-12-03
 *
 */

#include <cmath>
#include <iostream>

using namespace std;

bool is_num_prime(int num) {
  int x;
  bool is_prime;
  int counter;

  x = 2;
  is_prime = true;
  while (is_prime && (x <= num / 2)) {
    if (num % x != 0) {
      x = x + 1;
      counter++;
    } else {
      is_prime = false;
    }
  }

  cout << "IS PRIME COUNT: " << counter << endl;
  return is_prime;
}

bool is_num_prime_optimizated(int num) {
  int x;
  bool is_prime;
  int counter;

  x = 2;
  is_prime = true;
  while (is_prime && (x <= sqrt(num))) {
    if (num % x != 0) {
      x = x + 1;
      counter++;
    } else {
      is_prime = false;
    }
  }

  cout << "IS PRIME OPTIMIZATED COUNT: " << counter << endl;
  return is_prime;
}

int main() {

  int num; // number that we want to find if is prime
  int x;
  bool primo;
  int count;

  cout << "Enter an integer: ";
  cin >> num;

  x = 2;
  primo = true;

  while (primo && (x < num)) {
    if (num % x != 0) {
      x = x + 1;
      count++;
    } else {
      primo = false;
    }
  }

  cout << "IS PRIMo COUNTER: " << count << endl;

  if (!primo) {
    cout << "The number: " << num << " isn't a prime number." << endl;
  } else {
    cout << "The number: " << num << " is a prime number." << endl;
  }

  cout << "Using another method!" << endl;

  bool is_prime = is_num_prime(num);

  if (!is_prime) {
    cout << "The number: " << num << " isn't a prime number." << endl;
  } else {
    cout << "The number: " << num << " is a prime number." << endl;
  }

  // Optimization using the method with the root of the num
  cout << "Using another method!" << endl;

  bool is_prime_root = is_num_prime_optimizated(num);

  if (!is_prime_root) {
    cout << "The number: " << num << " isn't a prime number." << endl;
  } else {
    cout << "The number: " << num << " is a prime number." << endl;
  }

  cout << "FIN." << endl;
}
