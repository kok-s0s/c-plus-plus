#include <iostream>
using namespace std;

class Student {
public:
  string name;
  string major;
  double gpa;

  Student() {
    name = "no name";
    major = "no major";
    gpa = 0.0;
  }

  Student(string aName, string aMajor, double aGpa) {
    name = aName;
    major = aMajor;
    gpa = aGpa;
  }

  bool hasHonors() {
    if (gpa >= 3.5) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  Student student1 = Student("John Doe", "Computer Science", 3.5);
  Student student2 = Student("Jane Doe", "Art", 2.5);

  cout << student1.name << endl;
  cout << student1.major << endl;
  cout << student1.gpa << endl;
  cout << student1.hasHonors() << endl;

  cout << student2.name << endl;
  cout << student2.major << endl;
  cout << student2.gpa << endl;
  cout << student2.hasHonors() << endl;

  return 0;
}
