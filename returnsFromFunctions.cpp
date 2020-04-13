#include <iostream>

using namespace std;

// double tells us the function will return an double
double cube(double num) {
  double result = num * num * num;
  return result;
}

int main()
{
  double answer = cube(3);
  
  cout << answer << endl;
  return 0;
}

