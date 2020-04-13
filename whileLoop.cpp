#include <iostream>

using namespace std;

int main()
{
  int index = 1;
  // while loop checks a condition before every loop
  while (index <= 10) {
    cout << index << endl;
    index++;
  }
  
  // do ... while loop checks condition after every loop
  do {
    cout<< index << endl;
    index++;
  } while(index<=10);
  
  return 0;
}