#include <iostream>
using namespace std;

int main() {
  int m = 10, n;

  n = ++m;
  cout << "m = " << m << " n = " << n << endl;

  n = m++;
  cout << "m = " << m << " n = " << n << endl;

  cout << "m = " << m++ << endl;
  cout << "m = " << ++m << endl;

  n = 5;
  m = (++n) * (n--);
  cout << "n = " << n << " m = " << m << endl;

  return 0;
}
