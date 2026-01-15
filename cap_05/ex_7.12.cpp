/*
 * Leer una matriz cuadrada de orden 5 (5 filas y 5 columnas), y escribir la suma de 
 * todos los números que no están en la diagonal principal. El problema se resuelve 
 * en un solo programa principal. Dos bucles for anidados leen la matriz, otros dos 
 * bucles for anidados se encargan de realizar la suma de los elementos que no están
 * en la diagonal principal, que son aquellos que cumplen la condición i es distinto 
 * de j, siendo i y j los índices de la fila y columna respectivamente.
 *
*/

#include <iostream>
#include <iomanip>

using namespace std;

constexpr int MAX_F = 3;
constexpr int MAX_C = 3;


template <typename T, unsigned N, unsigned M>
void read_matrix(T (&A)[N][M]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      while (true) {
        cout << "A[" << i << "][" << j << "] = ";
        if (cin >> A[i][j]) {
          break;
        } else {
          cout << "Error: invalid value, please try again and enter a number." << endl;
          cin.clear();
          cin.ignore(1000, '\n');
        }
      }
    }
  }
}

template <typename T, unsigned N, unsigned M>
void print_matrix(T (&A)[N][M]) {
  const int col_width = 10;
  const int total_width = M * (col_width + 1) + 1;

  //cout << " ";
  //for (int k = 0; k < M; k++) cout << left << setw(col_width) << k << " "; 
  cout << "\nMatrix: " << endl;

  cout << string(total_width, '-') << endl;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      //cout << setw(col_width) << fixed << setprecision(2) << "A[" << i << "][" << j << "] = " << A[i][j] << " ";
      cout << right << setw(col_width) << fixed << setprecision(2) << A[i][j];
    }
    cout << endl;
  }
  cout << string(total_width, '-') << endl;
}

template <typename T, unsigned N, unsigned M>
void sum_non_diagonal(T &s, T (&A)[N][M]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (i != j) s += A[i][j];
    }
  }
}

template <typename T, unsigned N, unsigned M>
void sum_all_non_diagonal(T &s, T (&A)[N][M]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      s += A[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    s -= A[i][i];
  }
}

template <typename T, unsigned N, unsigned M>
void sum_triangle_superior(T &s, T (&A)[N][M]) {
  for (int i = 0; i < N; i++) {
    for (int j = i+1; j < M; j++) {
      s += A[i][j];
    }
  }
}

template <typename T, unsigned N, unsigned M>
void sum_triangle_inferior(T &s, T (&A)[N][M]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      s += A[i][j];
    }
  }
}

// N must to be equal to M
template <typename T, unsigned N, unsigned M>
void suma_secondary_diagonal(T &s, T (&A)[N][M]) {
  if (N != M) {
    cout << "Matrices con indices diferentes!" << endl;
    return;
  }
  int j;
  for (int i = 0; i < N; i++) {
    j = (M - 1) - i;
      s += A[i][j];
  }
}

template <typename T, unsigned N, unsigned M>
void sum_matrix_a_b(T (&S)[N][M], T (&A)[N][M], T (&B)[N][M]) {
  if (N != M) {
    cout << "Matrices con indices diferentes!" << endl;
    return;
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      S[i][j] = A[i][j] + B[i][j];
    }
  }
}

int main(int argc, char *argv[])
{
  float a[MAX_F][MAX_C];
  float b[MAX_F][MAX_C];
  float s[MAX_F][MAX_C];
  float suma_1 = 0.0;
  float suma_2 = 0.0;
  float suma_3_sup = 0.0;
  float suma_3_inf = 0.0;
  float sum_diag = 0.0;

  read_matrix(a);

  print_matrix(a); 

  sum_non_diagonal(suma_1, a);
  sum_all_non_diagonal(suma_2, a);
  sum_triangle_superior(suma_3_sup, a);
  sum_triangle_inferior(suma_3_inf, a);
  suma_secondary_diagonal(sum_diag, a);

  cout << "\nsuma_1 = " << suma_1 << endl;
  cout << "\nsuma_2 = " << suma_2 << endl;
  cout << "\nsuma_3_sup = " << suma_3_sup << endl;
  cout << "\nsuma_3_inf = " << suma_3_inf << endl;
  cout << "\nsuma_3 = " << suma_3_sup + suma_3_inf << endl;
  cout << "\nsuma_diag_secund = " << sum_diag << endl;


  read_matrix(b);

  sum_matrix_a_b(s, a, b);

  print_matrix(s);

  return 0;
}
