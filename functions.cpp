#include <iostream>

using namespace std;

// Declaring a function first allows you to change it below the `main` function
void sayHi(string name, int age);

// int means this function will return an integer. This integer is 0.
int main()
{
  cout<< "Top\n";
  sayHi("Jing Jie", 34);
  cout<< "Bottom";
  return 0;
}

// void means this function won't return anything
// params need to have a type
void sayHi(string name, int age) {
  cout << "Hello " << name << endl;
  cout << "You are " << age << " years old" << endl;
}