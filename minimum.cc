#include "minimum.h"
#include <vector>
int IndexOfMinimumElement(std::vector<double> input) {
  int tSmallest; 
  int index;
  if (input.size() == 0)
  {
    index = -1;
  }
  else
  {
    tSmallest = input.at(0);
    for (int i = 0; i < input.size(); i++)
    {
      if (input.at(i) <= tSmallest)
      {
        index = i;
      }
    }
  }
  

  return index;
}
