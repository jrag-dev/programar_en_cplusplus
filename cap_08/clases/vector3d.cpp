
#include <iostream>
#include <cmath>
#include <iomanip>


class Vector3D {

  private:
    double x;
    double y;
    double z;

  public:
    Vector3D(double _x = 0.0, double _y = 0.0, double _z = 0.0) : x(_x), y(_y), z(_z) {
      std::cout << "\nCreando Vector3D(" << _x << "," << _y << "," << _z << ")" << std::endl;
    }

    ~Vector3D() {
      std::cout << "\nDestructor Vector3D (" << x << "," << y << "," << z << ")" << std::endl;
    }

    Vector3D(const Vector3D& _vector) : x(_vector.x), y(_vector.y), z(_vector.z) {
      std::cout << "\nCopiando Vector3D(" << x << "," << y << "," << z << ")" << std::endl;
    }

    // Suma de dos vectores
    Vector3D operator+(const Vector3D& v) const {
      double x_pos = this->x + v.x;
      double y_pos = this->y + v.y;
      double z_pos = this->z + v.z;

      return Vector3D(x_pos, y_pos, z_pos);
    }

    // Resta de dos vectores
    Vector3D operator-(const Vector3D& v) const {
      double x_pos = this->x - v.x;
      double y_pos = this->y - v.y;
      double z_pos = this->z - v.z;

      return Vector3D(x_pos, y_pos, z_pos);
    }

    // escalamiento
    void escalamiento(const double k) {
      this->x = k*this->x;
      this->y = k*this->y;
      this->z = k*this->z;
    }

    // producto escalar
    double productoEscalar(const Vector3D& v) const {
      return this->x * v.x + this->y * v.y + this->z * v.z;
    }

    // producto vectorial
    Vector3D productoVectorial(const Vector3D& v) const {
      double r_x = this->y * v.z - this->z * v.y;
      double r_y = this->z * v.x - this->x * v.z;
      double r_z = this->x * v.y - this->y * v.x;
      return Vector3D(r_x, r_y, r_z);
    }

    // magnitud del vector
    double magnitud() const {
      return sqrt( (this->x * this->x) + (this->y * this->y) + (this->z * this->z) );
    }

    // vector unitario en la dirección del vector actual
    Vector3D vectorUnitario() const {
      const double m = this->magnitud();
      return Vector3D( this->x/m, this->y/m, this->z/m);
    }

    // Sobrecarga del operador += 
    Vector3D& operator+=(const Vector3D& v) {
      this->x += v.x;
      this->y += v.y;
      this->z += v.z;
      return *this;
    }

    // sobrecarga del operador *
    Vector3D operator*(double k) const {
      return Vector3D(this->x * k, this->y * k, this->z * k);
    }

    // sobrecarga del operador *
    double operator*(const Vector3D& v) const {
      return this->x * v.x + this->y * v.y + this->z * v.z;
    }

    // sobrebarga del operador <<
    friend std::ostream& operator<<(std::ostream& os, const Vector3D& v) {
      os << "(" << v.x << "," << v.y << "," << v.z << ")" << std::endl;
      return os;
    }

    void visualizar() const {
      std::cout << "\nVector(" << x << "," << y << "," << z << ")" << std::endl;
    }
};


int main(int argc, char *argv[])
{
  Vector3D v1(1.0, 1.0, 1.0);
  Vector3D v2(-1.0, -1.0, -1.0);
  Vector3D v0;
  Vector3D v5;
  Vector3D v6;

  Vector3D v4(v1);

  v0 = v1 + v4;
  v0.visualizar();

  v5 = v1 + v2;
  v5.visualizar();

  v6 = v1 + v0;
  v6.visualizar();

  Vector3D v7, v8, v9;

  v7 = v1 - v2;
  v8 = v0 - v1;
  v9 = v5 - v4;

  v7.visualizar();
  v8.visualizar();
  v9.visualizar();

  double v1_v2 = v1.productoEscalar(v2);
  std::cout << "producto escalar v1 con v2: " << v1_v2 << std::endl;

  std::cout << "\n****** Producto vectorial ********" << std::endl;
  Vector3D a1(1, 2, 3);
  Vector3D a2(4, 5, 6);
  Vector3D b1(1, 1, 1);
  Vector3D b2(-2, 0, 1);

  Vector3D a1_a2 = a1.productoVectorial(a2);
  Vector3D b1_b2 = b1.productoVectorial(b2);

  a1_a2.visualizar();
  b1_b2.visualizar();


  v1.visualizar();
  Vector3D v1_unitario = v1.vectorUnitario();
  v1_unitario.visualizar();

  std::cout << "\n****** Usando sobrecargas de los operadores *******" << std::endl;
  Vector3D c1;
  c1 += a1;
  c1.visualizar();

  std::cout << "\n---producto escalar: v1 * c1: " << v1 * c1 << std::endl;

  std::cout << v1 << std::endl;
  std::cout << v2 << std::endl;
  std::cout << a1 << std::endl;
  std::cout << c1 << std::endl;

  
  return 0;
}
