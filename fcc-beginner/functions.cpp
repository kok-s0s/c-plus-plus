#include <iostream>
using namespace std;

void sayHello(string name, int age) {
  cout << "Hello " << name << ", you are " << age << " years old." << endl;
}

int main() {
  sayHello("kok-s0s", 22);
  sayHello("man", 33);
  sayHello("lady", 34);

  return 0;
}
