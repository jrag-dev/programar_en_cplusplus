

#include <ostream>
#include <string>

void get_fact_for(int temp_num);
void get_fact_while(int temp_num);
void get_fact_do_while(int temp_num);
void show_factorial(int temp_num, double fact, std::string method);

#include <iostream>
int main(int argc, char *argv[]) {
  int num;
  double fact;

  do {
    std::cout << "Dame un número entero: ";
    std::cin >> num;
  } while (num <= 0);

  std::cout << "*********************************************************"
            << std::endl;
  std::cout << "* Prgrama que calcula el factorial de un número   \t*"
            << std::endl;
  std::cout << "* entero utlizando los bucles: FOR, WHILE y DO_WHILE  \t*"
            << std::endl;
  std::cout << "*********************************************************\n"
            << std::endl;
  get_fact_for(num);
  get_fact_while(num);
  get_fact_do_while(num);

  return 0;
}

void get_fact_for(int temp_num) {
  double fact = 1.0;
  for (int i = 1; i <= temp_num; i++) {
    fact *= i;
  }
  show_factorial(temp_num, fact, "FOR");
}

void get_fact_while(int temp_num) {
  int i = 1;
  double fact = 1.0;
  while (i <= temp_num) {
    fact *= i;
    i++;
  }
  show_factorial(temp_num, fact, "WHILE");
}

void get_fact_do_while(int temp_num) {
  int i;
  double fact = 1.0;

  i = 1;
  do {
    fact *= i;
    i++;
  } while (i <= temp_num);
  show_factorial(temp_num, fact, "DO_WHILE");
}

void show_factorial(int temp_num, double fact, std::string method) {
  std::cout << method << ":: " << "F(" << temp_num << ") = " << fact << "\n"
            << std::endl;
}
