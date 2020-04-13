#include <iostream>

using namespace std;

int main()
{
  int numberGrid[3][5] = {
    {2, 4, 6, 3, 8},
    {6, 8, 1, 3, 5},
    {3, 7, 1, 6, 5}
  };
  cout << numberGrid[2][2] << endl;
  return 0;
}