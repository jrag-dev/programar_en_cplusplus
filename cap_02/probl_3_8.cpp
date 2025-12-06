
/**
 * @file ex_conversion.cpp
 * @brief Implementación de un programa para tranformar una cantidad dada por el
 * usuario en billetes y monedas en dolares de curso legal.
 *
 * @author José Alvarado
 * @date 2025-11-02
 */

#include <iostream>
using namespace std;

int main() {
  int account_cents;
  float account;
  int billete100, billete50, billete20, billete10, billete5, billete1;
  int coinQuarters, coinDimes, coinNickels, coinPennies;

  cout << "Enter the account of Dollars: ";
  cin >> account;

  account_cents = account * 100;

  billete100 = account_cents / 10000;
  account_cents = account_cents % 10000;

  billete50 = account_cents / 5000;
  account_cents = account_cents % 5000;

  billete20 = account_cents / 2000;
  account_cents = account_cents % 2000;

  billete10 = account_cents / 1000;
  account_cents = account_cents % 1000;

  billete5 = account_cents / 500;
  account_cents = account_cents % 500;

  billete1 = account_cents / 100;
  account_cents = account_cents % 100;

  coinQuarters = account_cents / 25;
  account_cents = account_cents % 25;

  coinDimes = account_cents / 10;
  account_cents = account_cents % 10;

  coinNickels = account_cents / 5;
  account_cents = account_cents % 5;

  coinPennies = account_cents / 1;
  account_cents = account_cents % 1;

  cout << "\n-----------------------------------------------------" << endl;
  cout << " ✅ The account " << account << " se expresa como: " << endl;
  cout << "- Billetes de 100$: " << billete100 << endl;
  cout << "- Billeres de 50$: " << billete50 << endl;
  cout << "- Billetes de 20$ " << billete20 << endl;
  cout << "- Billetes de 10$: " << billete10 << endl;
  cout << "- Billetes de 5$: " << billete5 << endl;
  cout << "- Billetes de 1$: " << billete1 << endl;
  cout << "- Monedas de 0.25$ (Quarter): " << coinQuarters << endl;
  cout << "- Monedas de 0.10$ (Dime): " << coinDimes << endl;
  cout << "- Monedas de 0.05$ (Nickel): " << coinNickels << endl;
  cout << "- Monedas de 0.01$ (Penny): " << coinPennies << endl;
  cout << "-----------------------------------------------------" << endl;

  return 0;
}
