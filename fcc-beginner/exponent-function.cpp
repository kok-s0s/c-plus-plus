#include <iostream>
using namespace std;

int power(int baseNum, int powNum) {
  int result = 1;
  for (int i = 0; i < powNum; i++) {
    result *= baseNum;
  }
  return result;
}

int main() {
  cout << power(2, 6) << endl;
  return 0;
}
