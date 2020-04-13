#include <iostream>

using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  // Grabbing individual char from string using index
  cout << phrase[2] << endl;
  // Manipulate individual char in string using index
  phrase[0] = 'B';
  cout << phrase << endl;
  // Find a substring in a string, takes in two argument [substring] and [starting index]
  cout << phrase.find("Academy", 0) << endl;
  // substring
  string phrasesub;
  phrasesub = phrase.substr(0, 3); 
  cout << phrasesub << endl;
  return 0;
}