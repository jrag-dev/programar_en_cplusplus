//*********************************************************************************\\
//  punto.cpp
//  
//  Developer: Jose Alvarado
//  Date: 18-02-2026
//*********************************************************************************\\

#include <iostream>
#include <string>
#include <cmath>


class Punto {

  private:
    double x_;
    double y_;

  public:
    // Constructor por defecto (inicializa a 0.0)
    Punto() : x_(0.0), y_(0.0) {
      std::cout << "\nConstructor por defecto: Punto en (0,0)" << std::endl;
    }

    // Constructor parametrizado
    Punto(double x, double y) : x_(x), y_(y) {
      std::cout << "\nConstructor parametrizado: Punto en (" << x << ", " << y << ")" << std::endl;
    }

    // Constructor de copia
    Punto(const Punto& otro) : x_(otro.x_), y_(otro.y_) {
      std::cout << "\nConstructor de copia: copiando Punto" << std::endl;
    }

    // Destructor
    ~Punto() {
      std::cout << "\nDestructor: destruyendo Punto en (" << x_ << ", " << y_ << ")" << std::endl;
    }

    // Getters (métodos de acceso)
    double getX() const {
      return x_;
    }

    double getY() const {
      return y_;
    }

    // Setters
    void setX(double x) {
      this->x_ = x;
    }

    void setY(double y) {
      this->y_ = y;
    }

    // Método que usa 'this' explicitamente
    void asignar(const Punto& otro) {
      if (this != &otro) {   // Evitar auto-asignación
        this->x_ = otro.x_;
        this->y_ = otro.y_;
      }
    }

    // Método que calcula la distancia a otro punto
    double distancia(const Punto& otro) const {
      double dx = this->x_ - otro.x_;
      double dy = this->y_ - otro.y_;
      return std::sqrt(dx*dx + dy*dy);
    }

    // Método que calcula la distancia de un punto dado al origen
    double distancia_desde_origen() const {
      return std::sqrt( (this->x_)*(this->x_) + (this->y_)*(this->y_));
    }

    // Punto medio entre dos puntos
    Punto puntoMedio(const Punto& otro) const {
      double x_pos = (this->x_ + otro.x_)/2.0;
      double y_pos = (this->y_ + otro.y_)/2.0;
      return Punto(x_pos, y_pos);
    }

    // Verificar si dos puntos son iguales
    bool puntos_iguales(const Punto& otro) const {
      bool x_equals = this->x_ == otro.x_;
      bool y_equals = this->y_ == otro.y_;
      return (x_equals && y_equals);
    }

    void imprimir() const {
      std::cout << "Punto (" << this->x_ << "," << this->y_ << ") " << std::endl;
    }
};


// Función que demuestra el paso por valor (copia)
void funcionQueRecibePunto(Punto p) {
  std::cout << "\nDentro de función, punto recibido." << std::endl;
  p.imprimir();
  std::cout << std::endl;
} // Aquí se destruye la copia p

// Función que recibe un array de Punto
template <typename T = Punto>
const T* puntoMasLejano(T *puntos, size_t N) {
  if (N == 0) return nullptr;

  const T* p_mas_lejano = &puntos[0];

  double d_mayor = puntos[0].distancia_desde_origen();
  double d_current = 0.0;

  for (size_t i = 1; i < N; i++) {
    d_current = puntos[i].distancia_desde_origen();
    if (d_current > d_mayor) {
      d_mayor = d_current;
      p_mas_lejano = &puntos[i];
    }
  }
  return p_mas_lejano;
}


int main(int argc, char *argv[])
{
  std::cout << "\n*** Demostración de la clase Punto ***\n" << std::endl;

  // 1. Constructor por defecto
  std::cout << "Creando p1: " << std::endl;
  Punto p1;

  // 2. Constructor parametrizado
  std::cout << "\nCreando p2: " << std::endl;
  Punto p2(3.0, 4.0);

  // 3. Usando Setters
  p1.setX(1.0);
  p1.setY(2.0);

  // 4. Usando Getters
  std::cout << "\n | p1: ";
  p1.imprimir();
  std::cout << " | p2: ";
  p2.imprimir();
  std::cout << std::endl;

  // 5. Usando distancia
  double dist = p1.distancia(p2);
  std::cout << "\nDistancia entre p1 y p2: " << dist << std::endl;

  // 6. constructor de copia
  std::cout << "\nCreando p3 como copia de p2: " << std::endl;
  Punto p3 = p2;

  // USando el método asignar (con this)
  std::cout << "\nAsignando p3 a p1: " << std::endl;
  p1.asignar(p3);
  std::cout << "Ahora p1: ";
  p1.imprimir();
  std::cout << std::endl;


  // 8. Paso por valor
  std::cout << "\nLlamado a funcionQueRecibePunto con p2: " << std::endl;
  funcionQueRecibePunto(p2);

  // 9. Distancia de un pnto al origen
  double d10 = p1.distancia_desde_origen();
  std::cout << "Distancia entre p1 y el origen es: " << d10 << std::endl;

  // 10. Punto medio entre dos puntos
  Punto p4 = Punto(-1, 4);
  Punto p5 = p1.puntoMedio(p4);
  p4.imprimir();

  // 11. Verificar si dos puntos son iguales
  std::string son_iguales = p4.puntos_iguales(p3) ? "iguales" : "diferentes";
  std::cout << "p1 y p3 son " << son_iguales << std::endl;

  // 12. Array dinámico de Puntos
  size_t numero_puntos = 10;
  Punto *puntos_array = new Punto[numero_puntos];

  puntos_array[0] = p1;
  puntos_array[1] = p2;
  puntos_array[2] = p3;
  puntos_array[3] = p4;
  puntos_array[4] = p5;
  puntos_array[5] = Punto(2, 7);
  puntos_array[6] = Punto(6, 7);

  const Punto *p_mas_lejano_ptr = puntoMasLejano(puntos_array, numero_puntos);

  if (p_mas_lejano_ptr) {
    std::cout << "\nPunto más lejano: " << std::endl;
    p_mas_lejano_ptr->imprimir();
  }

  std::cout << "\n*** Fin del programa ***\n" << std::endl;

  // liberar memoria
  delete[] puntos_array;
  
  return 0;
}

