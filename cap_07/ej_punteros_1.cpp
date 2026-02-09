#include <iostream>
using namespace std;


int main() {

    int var = 10;

    int * ptr;

    ptr = &var;

    cout << "\nvar: " << var << endl;
    cout << "&var: " << &var << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    *ptr = 89;

    cout << "\nvar: " << var << endl;
    cout << "&var: " << &var << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    return 0;
}