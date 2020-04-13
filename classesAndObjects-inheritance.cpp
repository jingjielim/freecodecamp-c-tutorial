#include <iostream>

using namespace std;

class Chef {
  public:
    void makeChicken(){
      cout << "The chef makes chicken" << endl;
    }
    void makeSpecialDish() {
      cout << "The chef makes bbq ribs" <<endl;
    }
};

class ItalianChef : public Chef{
  public:
    void makePasta() {
      cout << "The chef makes pasta" << endl;
    }
    void makeSpecialDish() {
      cout << "The chef makes chicken parm" <<endl;
    }
};

int main()
{
  Chef chef1;
  chef1.makeChicken();
  chef1.makeSpecialDish();
  ItalianChef chef2;
  chef2.makeChicken();
  chef2.makePasta();
  chef2.makeSpecialDish();
  return 0;
}