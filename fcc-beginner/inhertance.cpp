#include <iostream>
using namespace std;

class Chef {
 public:
  void makeChicken() { cout << "The chef makes chicken" << endl; }
  void makeSaled() { cout << "The chef makes saled" << endl; }
  void makeSpecialDish() { cout << "The chef makes special dish" << endl; }
};

class ItalianChef : public Chef {
 public:
  void makeSpecialDish() { cout << "The chef makes chicken parm" << endl; }
  void makePasta() { cout << "The chef makes pasta" << endl; }
};

int main() {
  Chef chef;
  chef.makeChicken();

  ItalianChef italianChef;
  italianChef.makeSaled();
  italianChef.makePasta();
  italianChef.makeSpecialDish();

  return 0;
}
