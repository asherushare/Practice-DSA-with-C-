#include <iostream>
using namespace std;

class Hero {
  int health;

public:
  char level;

  void print() {
    cout << level << endl;
  }

  void set(int x) {
    health = x;
  }

  int get() {
    return health;
  }
};

int main() {

  Hero Patra;

  Patra.set(23);
  Patra.level = 'P';

  cout << Patra.get() << endl;

  return 0;
}