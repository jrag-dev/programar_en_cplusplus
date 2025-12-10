

#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  int num = 10;
  const int MAX_NUM = 100;

  std::cout << "\n" << std::endl;
  while (num <= MAX_NUM) {
    std::cout << num << ' ';
    num += 10;
  }
  std::cout << "\n" << std::endl;

  num = 10;
  for (num = 10; num <= MAX_NUM; num += 10) {
    std::cout << num << ' ';
  }
  std::cout << "\n" << std::endl;

  num = 10;
  do {
    std::cout << num << ' ';
    num += 10;
  } while (num <= MAX_NUM);

  std::cout << "\n" << std::endl;
}
