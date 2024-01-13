#include <iostream>
using namespace std;

class Hero {
  public:
  int health;
  char level;
};

class Heroine {

};

int main() {

  Hero Patra;

  Patra.health = 23;
  Patra.level = 'H';

  Heroine h2;

  cout << Patra.health << endl << Patra.level << endl;

  cout << "size: " << sizeof(Patra) << endl;
  cout << "size: " << sizeof(h2) << endl;

  return 0;
}