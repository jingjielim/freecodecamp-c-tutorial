#include <iostream>

using namespace std;

int main()
{
  int secretNum = 7;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;
  
  while (guess != secretNum && !outOfGuesses) {
    if (guessCount < guessLimit) {
      cout << "Enter guess: ";
      cin >> guess;
      guessCount++;
    } else {
      outOfGuesses = true;
    }
  }
  
  if (outOfGuesses) {
    cout << "You lose!";
  } else {
    cout << "You win!";  
  }
    
  return 0;
}