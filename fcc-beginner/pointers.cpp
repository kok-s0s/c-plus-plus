#include <iostream>
using namespace std;

int main() {
  int age = 19;
  int *pAge = &age;
  double gpa = 3.5;
  double *pGpa = &gpa;
  string name = "Mike";
  string *pName = &name;

  cout << "age: " << &age << endl;
  cout << "pAge: " << pAge << endl;
  cout << *pAge << endl;
  cout << "gpa: " << &gpa << endl;
  cout << "pGpa: " << pGpa << endl;
  cout << *pGpa << endl;
  cout << "name: " << &name << endl;
  cout << "pName: " << pName << endl;
  cout << *pName << endl;

  return 0;
}
