/*
 * Reference and value parameters
 *
 *       Date         Programmer
 *    27/12/2025     Jose Alvarado
*/

#include <iostream>
using namespace std;


void addFirst(int& first, int& second);
void doubleFirst(int one, int two);
void squareFirst(int& ref, int val);


int main(int argc, char *argv[])
{
  int num = 5;

  cout << "Line 1: Inside main: num = " << num << endl;

  addFirst(num, num);

  cout << "Line 3: Inside main after addFirst: num = " << num << endl;

  doubleFirst(num, num);
  cout << "Line 5: Inside main after dobleFirst: num = " << num << endl;

  squareFirst(num, num);
  cout << "Line 7: Inside main after squareFirst: num = " << num << endl;
  
  return 0;
}


void addFirst(int& first, int& second) {
  cout << "Line 8: Inside addFirst: first = " << first << ", second = " << second << endl;

  first = first + 2;

  cout << "Line 10: Inside addFirst: first = " << first << ", second = " << second << endl;

  second = second * 2;

  cout << "Line 12: Inside addFirst: first = " << first << ", second = " << second << endl;
}


void doubleFirst(int one, int two) {
  cout << "Line 13: Inside doubleFirst: one = " << one << ", two = " << two << endl;

  one = one * 2;

  cout << "Line 15: Inside doubleFirst: one = " << one << ", two = " << two << endl;

  two = two + 2;

  cout << "Line 17: Inside doubleFirst: one = " << one << ", two = " << two << endl;
}

void squareFirst(int& ref, int val) {
  cout << "Line 18: Inside squareFirst: ref = " << ref << ", val = " << val << endl;

  ref = ref * ref;

  cout << "Line 20: Inside squareFirst: ref = " << ref << ", val = " << val << endl;

  val = val + 2;

  cout << "Line 22: Inside squareFirst: ref = " << ref << ", val = " << val << endl;

}

