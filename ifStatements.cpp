#include <iostream>

using namespace std;

int main()
{
  bool isMale = false;
  bool isTall = false;
  
  if (isMale && isTall) {
    cout << "You are a tall male!\n";
  } else if (isMale && !isTall) {
    cout << "You are a short male\n";
  } else if (isMale || isTall) {
    cout << "You are either tall or a male\n";
  } else {
    cout << "You are not tall and not male!\n";
  }
  return 0;
}