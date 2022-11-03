#include <iostream>
#include <vector>
#include "minimum.h"

int main() 
{

  int size;
  std::cout << "How many elements? ";
  std::cin >> size;

  std::vector<double> numbers(size);
  for (int i = 0; i < size; i++) {
    double value;
    std::cout << "Element " << i << ": ";
    std::cin >> value;
    numbers.at(i) = value;
  }

  int mElem = IndexOfMinimumElement(numbers);

  std::cout << "The minimum value in your vector is at index " << mElem;
}
