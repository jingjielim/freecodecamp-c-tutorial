#include <iostream>

using namespace std;

int main()
{
  int age = 10;
  //pAge points to the physical address in the RAM that stores the variable age
  int *pAge = &age;
  double gpa = 2.7;
  // pointer variable has the same data type as the variable it is pointing to
  double *pGpa = &gpa;
  // prints out the physical address 
  cout << pAge << endl;
  // * 'dereferencing' the pointer and outputs the value stored at the address
  cout << *pAge << endl;
  // can be chained with the & operator
  cout << *&gpa << endl;
  return 0;
}