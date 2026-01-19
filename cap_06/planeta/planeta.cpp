#include "planeta.hpp"
#include <cmath>


void calcular_fuerza_gravitacional(double (&f), const planeta &p1, const planeta &p2) {
    const double G = 6.674e-11;
    double dx = p2.pos_x - p1.pos_x;
    double dy = p2.pos_y - p1.pos_y;
    double r = std::sqrt(dx*dx + dy+dy);

    if (r > 1e-5) f = G * (p1.masa * p2.masa) / (r * r);
}

