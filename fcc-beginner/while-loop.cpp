#include <iostream>
using namespace std;

int main() {
  int index = 1;

  while (index <= 5) {
    cout << index << endl;
    index++;
  }

  do {
    cout << "so sorry! It's too big!" << endl;
    cout << index << endl;
    index++;
  } while (index <= 5);

  return 0;
}
