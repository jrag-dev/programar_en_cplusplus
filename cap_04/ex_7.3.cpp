/*
 * Write a program to print a patter (a triangle of stars) similar to the
 * following:
 *          *
 *         * *
 *        * * *
 *       * * * *
 *      * * * * *
 *
*/

#include <iostream>
using namespace std;


void printStars(int blanks, int starsInLine);
void printRectangule(int blanks, int starInLines);
void printStarUpToDown(int numOfLines);


int main(int argc, char *argv[])
{
  int numOfLines;
  int counter;
  int numOfBlanks;
  int numOfLinesInRectangule;

  cout << "Enter the number of star lines (1 to 20) "
       << "to be printed: ";
  cin >> numOfLines;

  while (numOfLines < 0 || numOfLines > 20) {
    cout << "Number of star lines should be between 1 and 20" << endl;
    
    cout << "Enter the number of star lines (1 to 20) "
        << "to be printed: ";
    cin >> numOfLines;
  }

  cout << endl << endl;
  numOfBlanks = 40;

  for (counter = 1; counter <= numOfLines; counter++) {
    printStars(numOfBlanks, counter);
    numOfBlanks--;
  }

  numOfLines < 10 ? (numOfLinesInRectangule = numOfLines / 2) : (numOfLinesInRectangule = numOfLines / 4);

  for (counter = 1; counter <= numOfLinesInRectangule; counter++) {
    printRectangule(numOfBlanks+numOfLines, 4);
  }
 
  return 0;
}


void printStars(int blanks, int starsInLine) {
  int count;

  for (count = 1; count <= blanks; count++) {
    cout << ' ';
  }

  for (count = 1; count <= starsInLine; count++) {
    cout << " *";
  }
  
  cout << endl;
}

void printRectangule(int blanks, int starInLines) {
  int count;

  for (count = 1; count <= blanks; count++) {
    cout << ' ';
  }

  for (count = 1; count <= starInLines; count++) {
    cout << "*"; 
  }
  cout << endl;
}
