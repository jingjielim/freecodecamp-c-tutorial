#include <iostream>

using namespace std;

int main()
{
  // Initialising array with some numbers
  int luckyNums[] = {4, 8, 15, 16, 23, 42};
  cout << luckyNums[0] << endl;
  luckyNums[0] = 55;
  // Initialising a 20 element array with no known elements yet
  int randomNums[20];
  cout << randomNums[0] << endl;
  return 0;
}