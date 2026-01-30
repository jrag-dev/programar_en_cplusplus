
// USo ineficiente de los espacios de memoria
// Proximo paso usar SoA (Estructurad e Arreglos) para SIMD

#include <iostream>
#include <iomanip>

using namespace std;


struct Particle
{
    double x, y, z;     // Position
    double vx, vy, vz;  // Velocity
    double mass;
};

void simulate_step(Particle *p, double dt) {
    // position = position + velocity * time
    p->x += p->vx * dt;
    p->y += p->vy * dt;
    p->z += p->vz * dt;
}

int main(int argc, char const *argv[])
{
    Particle sistem[] = {
        { 0.0, 0.0, 0.0, 1.2, 0.5, 0.0, 1.0},
        { 0.0, 0.0, 0.0, -0.5, 0.0, 0.1, 2.5}
    };
    double delta_t = 0.01;

    Particle *ptr = sistem;

    for (size_t i = 0; i < 2; i++, ptr++) {
        simulate_step(ptr,delta_t);
        cout << "New Position: " << ptr->x << endl;
    }

    
    return 0;
}
