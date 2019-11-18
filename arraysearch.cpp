
/*Array Search*/

/*Assigns values to an array in an arithmetic sequence
starting from 0 and prints a specified term of the
sequence*/

#include <iostream>

int main(int argc, char** argv) {

  int sequence;
  std::cin >> sequence;

  //initializes t0 to the difference for simplicity
  //definitley could be implemented better
  int t0 = sequence;
  unsigned int n;

  int values[10];

  for(int i = 0; i < 10; i++) {
    values[i] = i*sequence;
    std::cout << values[i] << std::endl;
  }

  int d = values[9] - values[8];

  std::cin >> n;

  int result = t0+(n-2)*d;

  std::cout << result << std::endl;

  return 0;
}
