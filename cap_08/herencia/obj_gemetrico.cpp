

#include <iostream>

using namespace std;


const float PI = 3.14159265;

class ObjGeometrico {

  protected:
    float xc, yc;

  public:
    ObjGeometrico(float x=0, float y=0) : xc(x), yc(y) {}

    void imprimirCentro() const {
      cout << xc << " " << yc << endl;
    }

};


class Circulo : public ObjGeometrico {
  private:
    float radio;

  public:
    Circulo(float x_c, float y_c, float r) : ObjGeometrico(x_c, y_c) {
      this->radio = r;
    }

    float area() const {
      return PI * this->radio * this->radio;
    }
};

class Cuadrado : public ObjGeometrico {
  private:
    float x_cord;
    float y_cord;

  public:
    Cuadrado(float x_c, float y_c, float x, float y) : ObjGeometrico(x_c, y_c) {
      x_cord = x;
      y_cord = y;
    }

    float area() const {
      float a, b;
      a = x_cord - xc;
      b = y_cord - yc;
      return 2 * (a*a + b*b);
    }
};


int main(int argc, char *argv[])
{
  Cuadrado c1(3, 3.5, 4.37, 3.85);
  Circulo circulo1(2, 2.5, 2);

  cout << "El centro del cuadrado es: "; 
  c1.imprimirCentro();
  cout << "El centro del círculo es: ";
  circulo1.imprimirCentro();

  cout << "\nArea del círculo: " << circulo1.area() << endl;
  cout << "\nArea del cuadrado: " << c1.area() << endl;
  
  return 0;
}
