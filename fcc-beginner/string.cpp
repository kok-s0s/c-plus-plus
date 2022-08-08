#include <iostream>
using namespace std;

int main() {
  string phrase = "Giraffe Academy";

  cout << phrase.length() << endl;

  cout << phrase[0] << endl;

  phrase[0] = 'C';

  cout << phrase << endl;

  cout << phrase.find("ffe", 0) << endl;

  cout << phrase.substr(0, 4) << endl;

  string phrasesub = phrase.substr(8, 3);

  cout << phrasesub << endl;

  return 0;
}
