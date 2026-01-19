
#include <iostream>
#include <vector>

using namespace std;

constexpr unsigned int N = 100000, J = 500;
constexpr double PI = 3.14159265358979323846;
constexpr double k = 1.0;
constexpr double m = 1.0;



int main(int argc, char const *argv[])
{
    vector<double> x(N+1);
    vector<double> v(N+1);

    double dt = 2 * PI / N;
    x[0] = 0.0;
    v[0] = 1.0;

    for (size_t i = 0; i < N; ++i) {
        x[i+1] = x[i] + dt*v[i];
        v[i+1] = v[i] - (dt/m) * (k * x[i]); 
    }

    double t = 0;
    double jdt = J * dt;
    for (size_t i = 0; i <= N; i+=J) {
        cout << t << " " << x[i] << " " << v[i] << endl;
        t += jdt;
    }

    
    return 0;
}
