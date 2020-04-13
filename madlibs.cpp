#include <iostream>

using namespace std;
int main()
{
  string color, pluralNoun, celebrity;
  
  cout << "Enter a color: ";
  cin >> color;
  cout << "Enter a pluralNoun: ";
  cin >> pluralNoun;
  cout << "Enter a celebrity: ";
  cin >> celebrity;

  cout << "Roses are " << color << endl;
  cout << pluralNoun << " are blue" << endl;
  cout << "I love " << celebrity << endl;
  
  return 0;
}