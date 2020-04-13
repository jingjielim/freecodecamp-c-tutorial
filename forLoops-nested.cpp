#include <iostream>

using namespace std;

int main()
{
  // 2D array
  int numberGrid[3][5] = {
    {2, 4, 6, 3, 8},
    {6, 8, 1, 3, 5},
    {3, 7, 1, 6, 5}
  };
  // Nested for loop goes through each element in the 2D array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout << numberGrid[i][j] << endl;
    }
  }
  return 0;
}