#ifndef PLANETA_HPP
#define PLANETA_HPP

struct planeta
{
    double masa;
    double pos_x;
    double pos_y;
    double vx;
    double vy;
};

void calcular_fuerza_gravitacional(double &f, const planeta &p1, const planeta &p2);

#endif