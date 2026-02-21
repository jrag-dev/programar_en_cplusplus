// ------------------------------------------------------------------------//
// account_main.cpp
// Uses abjects of class Account
// ------------------------------------------------------------------------//

#include "account.h"

int main() {
  
  Account account1("Jose Alvarado", 987456322, 50000.74);
  Account account2("Marcos Malave", 125487966, 1000.00);
  Account account3("Fernando Herrera", 987436441, 24100.22);

  account1.display();


  return 0;
}
