#include <iostream>

int main(int argc, char *argv[])
{
  const int N_ROWS = 10;
  const int N_COLUMNS = (N_ROWS + 1) / 2;

  for (int i = 0; i < N_ROWS; i++) {
    int ROWS_LENGTH;

    ROWS_LENGTH = N_COLUMNS - std::abs(i - (N_COLUMNS - 1));

    for (int j = 1; j <= ROWS_LENGTH; ++j ) {
      std::cout << j << "\t";
    }
    std::cout << std::endl;
  }
  

  return 0;
}
