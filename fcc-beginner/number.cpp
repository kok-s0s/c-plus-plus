#include <cmath>
#include <iostream>
using namespace std;

int main() {
  cout << 5 + 7 << endl;
  cout << 5 * 7 << endl;
  cout << 10 % 3 << endl;
  cout << (4 + 5) * 10 << endl;

  int wnum = 5;

  cout << wnum << endl;

  wnum++;

  cout << wnum << endl;

  wnum--;

  cout << wnum << endl;

  ++wnum;

  cout << wnum << endl;

  --wnum;

  cout << wnum << endl;

  wnum += 80;

  cout << wnum << endl;

  double dnum = 5.5;

  cout << 10 / 3 << endl;
  cout << 10.0 / 3.0 << endl;

  cout << pow(2, 3) << endl;
  cout << pow(2, 6) << endl;
  cout << sqrt(36) << endl;
  cout << round(4.3) << endl;
  cout << ceil(4.6) << endl;
  cout << ceil(4.1) << endl;
  cout << floor(4.8) << endl;
  cout << fmax(3, 9) << endl;
  cout << fmin(3, 9) << endl;

  return 0;
}
