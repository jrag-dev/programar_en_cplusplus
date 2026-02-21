// account.h
// Definig the class Account
// ------------------------------------------------------
#ifndef _ACCOUNT_
#define _ACCOUNT_ // Avoid multiples inclusions.

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
  string name;      // Account holder
  unsigned long nr; // Account number
  double balance;   // Account balance

public:
  // Constructor
  Account(const string &_name, unsigned long _nr, double _balance);

  // Destructor: Se llama solo cuando el objeto muere
  ~Account();

  void display();
};

#endif // _ACCOUNT_
