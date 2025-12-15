
#include <iostream>
#include <limits>


int get_num_input() {
  int n;

  std::cout << "\nEnter a integer number (n): ";
  do {
    if (!(std::cin >> n)) {
      std::cout << "\Error: Invalid value. You must to enter an integer value." << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), 'n');
    }

    if (n <= 0) {
      std::cout << "\nThe input value must to be an integer. Try again." << std::endl;
    }
  } while (n <= 0);

  return n;
}

int main(int argc, char *argv[])
{
  int n;
  
  // call to get input value
  n = get_num_input();

  // do calculate
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n-i); j++) {
      std::cout << (j+1) << " ";
    }
    std::cout << std::endl;
  }
  
  return 0;
}
