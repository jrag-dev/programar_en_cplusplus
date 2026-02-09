#include <iostream>
using namespace std;


int var = 15;

void miFuncion(int * var) {

    *var = *var + 10;

}


int main() {

    miFuncion(&var);

    cout << var << endl;

}