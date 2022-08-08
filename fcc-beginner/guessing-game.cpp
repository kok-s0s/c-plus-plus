#include <iostream>
using namespace std;

int main() {
  int secretNum = 7;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;

  while (secretNum != guess) {
    if (guessCount < guessLimit) {
      cout << "Guess the secret number: ";
      cin >> guess;
      if (guess < secretNum) {
        cout << "Too low" << endl;
      } else if (guess > secretNum) {
        cout << "Too high" << endl;
      }
      guessCount++;
    } else {
      outOfGuesses = true;
      break;
    }
  }

  if (outOfGuesses) {
    cout << "You lose!" << endl;
  } else {
    cout << "You guessed the secret number!" << endl;
  }

  return 0;
}
