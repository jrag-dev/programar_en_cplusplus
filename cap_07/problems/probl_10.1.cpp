/*
    // Problema 10.1
    Dada la declaración de la estructura punto del Ejercicio 11.7, escribir una
    función que devuelva la dirección de un array dinámico de n punto en el
   espacio tridimensional. Los valores de los datos se leen del dispositivo de
   entrada (teclado).

    // Problema 10.2:
    Añadir al problema anterior una función que muestre los puntos de un vector
   dinámico cuya tercera coordenada sea mayor que un parámetro que recibe como
   dato.

    Programmer: Jose Alvarado
    Date: 03-02-2026
    Hour: 12:39 AM
    Cumaná, Venezuela
*/

#include <cmath>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

struct Punto {
  string nombre = "Por defecto";
  double x = 0.0, y = 0.0, z = 0.0;
  bool definido = false;
};

struct Triangulo {
  size_t v1, v2, v3;
  double area, perimetro;
};

template <typename T> void declarar_punto(T *array, size_t pos, T p) {
  array[pos] = p;
}

template <typename T = Punto, typename ZT = double>
void mostrar_puntos(ZT z_cord, T *array, size_t n) {
  cout << "\n--- Se ingresaron los siguientes puntos: ---" << endl;
  for (size_t i = 0; i < n; i++) {
    if (array[i].z > z_cord) {
      cout << array[i].nombre << " ll" << endl;
    }
  }
}

template <typename ReturnType = Punto> ReturnType *fabrica_puntos(size_t n) {
  try {
    ReturnType *pts = new ReturnType[n];

    cout << "\nMemoria asignada correctamente..." << endl;

    for (size_t i = 0; i < n; i++) {
      cout << "\n--- Datos del punto [" << i << "] ---" << endl;
      cout << "Nombre: ";
      cin >> ws;
      getline(cin, pts[i].nombre);

      cout << "\nComponentes x, y, z (separadas por espacio en blanco): ";
      cin >> pts[i].x >> pts[i].y >> pts[i].z;

      pts[i].definido = true;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return pts;
  } catch (const bad_alloc &e) {
    cerr << "\nError memoria insuficiente: " << e.what() << endl;
    return nullptr;
  }
}

template <typename T = Punto> double norma_cuadrada(T *p) {
  return (p->x * p->x) + (p->y * p->y) + (p->z * p->z);
}

template <typename T = Punto> T *punto_mas_alejado(size_t n, T *array) {
  if (n == 0 || array == nullptr)
    return nullptr;

  T *p_max = &array[0];
  double norma_d2_p_max = norma_cuadrada(p_max);

  double norma_d2_aux = 0.0;
  for (size_t i = 0; i < n; i++) {
    norma_d2_aux = norma_cuadrada(&array[i]);

    if (norma_d2_aux > norma_d2_p_max) {
      norma_d2_p_max = norma_d2_aux;
      p_max = &array[i];
    }
  }

  return p_max;
}

template <typename T = Punto>
void mostrar_puntos_almacenado(size_t n, T *array) {
  cout << "\n--- PUNTOS DISPONIBLES ---" << endl;
  for (size_t i = 0; i < n; i++) {
    cout << "ÍNDICE[" << i << "]: " << array[i].nombre
         << " -> "
            " ("
         << array[i].x << ", " << array[i].y << ", " << array[i].z << ") "
         << endl;
  }
  cout << endl;
}

template <typename T = Punto, typename P = Triangulo>
void obtener_indices_triangulo(size_t n, T *array, P *triangulo) {
  size_t *vertices[3] = {&(triangulo->v1), &(triangulo->v2), &(triangulo->v3)};

  int count = 0;
  size_t indice_leido = 0;

  mostrar_puntos_almacenado(n, array);

  cout << "\n--- CONFIGURACIÓN DE TRIÁNGULOS ---" << endl;

  while (count < 3) {
    cout << "Introduzca el indice del vertice V[" << count << "]: ";
    if (cin >> indice_leido && indice_leido < n) {
      *(vertices[count]) = indice_leido;
      count++;
    } else {
      cout << "Error: el indice debe ser un entero!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }
}

template <typename T = Triangulo>
void mostrar_triangulos_almacenados(size_t n_tri, T *pt_array) {
  for (size_t i = 0; i < n_tri; i++) {
    cout << "V1: " << pt_array[i].v1 << endl;
    cout << "V2: " << pt_array[i].v2 << endl;
    cout << "V3: " << pt_array[i].v3 << endl;
  }
}

template <typename P = Punto>
double calc_distance_between_points(P *p1, P *p2) {
  double d_2 = (p2->x - p1->x) * (p2->x - p1->x) +
               (p2->y - p1->y) * (p2->y - p1->y) +
               (p2->z - p1->z) * (p2->z - p1->z);

  return sqrt(d_2);
}

template <typename T = Triangulo, typename P = Punto>
void calc_perimeter(T *triangle, P *nube_puntos) {
  double lado1 = calc_distance_between_points(&nube_puntos[triangle->v1],
                                              &nube_puntos[triangle->v2]);
  double lado2 = calc_distance_between_points(&nube_puntos[triangle->v2],
                                              &nube_puntos[triangle->v3]);
  double lado3 = calc_distance_between_points(&nube_puntos[triangle->v3],
                                              &nube_puntos[triangle->v1]);

  triangle->perimetro = lado1 + lado2 + lado3;

  cout << "\nEl perimétro es: " << triangle->perimetro << endl;
}

template <typename T = Triangulo, typename P = Punto>
void calc_area(T *triangle, P *nube_puntos) {
  double lado1 = calc_distance_between_points(&nube_puntos[triangle->v1],
                                              &nube_puntos[triangle->v2]);
  double lado2 = calc_distance_between_points(&nube_puntos[triangle->v2],
                                              &nube_puntos[triangle->v3]);
  double lado3 = calc_distance_between_points(&nube_puntos[triangle->v3],
                                              &nube_puntos[triangle->v1]);
  double s = (lado1 + lado2 + lado3) / (2.0);

  triangle->area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));

  cout << "\nEl área del triangulo es: " << triangle->area << endl;
}

int main(int argc, char const *argv[]) {
  size_t n;
  double z_value = 0.0;

  cout << "\nIntroduzca la cantidad de puntos: ";
  cin >> n;

  Punto *puntos_particulas = fabrica_puntos(n);
  Punto *pp = puntos_particulas;

  size_t num_triangulos = 1;
  Triangulo *ptriangulos = new Triangulo[num_triangulos];

  for (size_t i = 0; i < n; i++, pp++) {
    if (pp->definido) {
      cout << pp->nombre << ": (" << pp->x << ", " << pp->y << ", " << pp->z
           << ") " << endl;
    }
  }

  cout << "\nIntroduzca la tercera coordenada: ";
  cin >> z_value;

  mostrar_puntos(z_value, puntos_particulas, n);

  // punto más alejado
  Punto *punto_alejado = punto_mas_alejado(n, puntos_particulas);

  cout << "\n--- Punto más alejado: ---" << endl;
  cout << punto_alejado->nombre << endl;

  obtener_indices_triangulo(n, puntos_particulas, &ptriangulos[0]);

  mostrar_triangulos_almacenados(num_triangulos, ptriangulos);

  calc_perimeter(ptriangulos, puntos_particulas);
  calc_area(ptriangulos, puntos_particulas);

  delete[] puntos_particulas;
  delete[] ptriangulos;
  puntos_particulas = nullptr;
  pp = nullptr;

  return 0;
}
