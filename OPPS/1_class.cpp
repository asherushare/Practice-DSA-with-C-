#include <iostream>
using namespace std;

class topper
{
private:
  int health;

public:
  char level;

  void print() {
    cout << level << endl;
  }

  int gethealth() {
    return health;
  }

  char getlevel() {
    return level;
  }

  void sethealth(int h) {
    health = h;
  }

  void setlevel(char ch) {
    level = ch;
  }

};

int main()
{
  topper Patra;

  cout << "Patra health is: " << Patra.gethealth() << endl;
  Patra.level = 'P';
  Patra.sethealth(23);

  cout << "health is: " << Patra.gethealth() << endl;

  cout << "level is: " << Patra.level << endl;

  return 0;
}
