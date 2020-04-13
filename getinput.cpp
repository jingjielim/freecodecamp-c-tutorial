#include <iostream>

using namespace std;

int main()
{
  string name;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "Hello " << name << endl;
  
  double age;
  
  cout << "Enter your age: ";
  cin >> age;
  cout << "You are " << age << " years old" << endl;
  
  return 0;
}