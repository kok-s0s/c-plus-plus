#include <iostream>
using namespace std;

int main() {
  int luckyNums[] = {2, 4, 8, 11, 31};

  cout << "The lucky numbers are: ";
  cout << luckyNums[3] << endl;

  luckyNums[1] = 7;

  cout << luckyNums[1] << endl;

  return 0;
}
