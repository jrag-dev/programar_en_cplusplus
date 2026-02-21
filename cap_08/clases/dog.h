// --------------------------------------------------------------------------------\\
// dog.h
// Defining the class Dog
//
// Developer: Jose Alvarado
// Date: 17-02-2026
// --------------------------------------------------------------------------------\\

#ifndef _DOG_
#define _DOG_

#include <iostream>
#include <string>
using namespace std;

class Dog {

private:
  unsigned long id;
  string name;
  string color;
  unsigned long owner_id;

public:
  // Constructores
  Dog(unsigned long _id, string _name, string _color, unsigned long _owner_id);

  // Destructor
  ~Dog();

  // Métodos
  void ladrar();
  void darLaPatita();
  void dormir();
  void comer();
  void girar();
};

#endif // !_DOG_
