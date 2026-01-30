/*
*   Punteros a constantes
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   const int x = 25;
   const int y = 50;
   const int *p1 = &x;
   
   cout << "\np1 = &x" << endl;
   cout << "Direcciones: " << endl;
   cout << "&x = " << &x << endl;
   cout << "&y = " << &y << endl;
   cout << "&p1 = " << &p1 << endl;
   cout << "p1 = " << p1 << endl;

   cout << "\nValores: " << endl;
   cout << "x = " << x << endl;
   cout << "y = " << y << endl;
   cout << "*p1 = " << *p1 << endl;

   p1 = &y;

   cout << "\np1 = &y" << endl;
   cout << "Direcciones: " << endl;
   cout << "&x = " << &x << endl;
   cout << "&y = " << &y << endl;
   cout << "&p1 = " << &p1 << endl;
   cout << "p1 = " << p1 << endl;

   cout << "\nValores: " << endl;
   cout << "x = " << x << endl;
   cout << "y = " << y << endl;
   cout << "*p1 = " << *p1 << endl;

   p1 = &x;

   cout << "\np1 = &y" << endl;
   cout << "Direcciones: " << endl;
   cout << "&x = " << &x << endl;
   cout << "&y = " << &y << endl;
   cout << "&p1 = " << &p1 << endl;
   cout << "p1 = " << p1 << endl;

   cout << "\nValores: " << endl;
   cout << "x = " << x << endl;
   cout << "y = " << y << endl;
   cout << "*p1 = " << *p1 << endl;
    
    return 0;
}
