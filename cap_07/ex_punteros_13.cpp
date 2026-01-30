/*
*   Punteros como argumentos de funciones
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

void get_number(double *num);
void calculate_sum(const double *num1, const double *num2, double *s);
void print_result(const double *num1, const double *num2, const double *s);

int main(int argc, char const *argv[])
{
    double n1 = 0, n2 = 0;
    double suma = 0.0;

    get_number(&n1);
    get_number(&n2);

    cout << fixed << setprecision(2) << endl;

    // calculate the sum
    calculate_sum(&n1, &n2, &suma);

    // print of results
    print_result(&n1, &n2, &suma);
    
    return 0;
}


void get_number(double *num) {
    cout << "Enter a real number: ";
    while (!(cin >> *num)) {
        cout << "Error: this value isn't a number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void calculate_sum(const double *num1, const double *num2, double *s) {
    *s = *num1 + *num2;
}

void print_result(const double *num1, const double *num2, const double *s) {
    cout << "Sum: " << *s << endl;

}