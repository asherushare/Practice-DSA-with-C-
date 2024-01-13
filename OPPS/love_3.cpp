#include <iostream>
using namespace std;

class Topper {
  public:
  int age;
  float salary;

  Topper() {
    age = 23;
    salary = 23.33;
  }
};

int main() {

  Topper t;
  cout << "size is: " << sizeof(t) << endl;
  cout << t.age << endl;
  cout << t.salary << endl;

  Topper *b = new Topper;

  cout << "size is: " << sizeof((*b)) << endl;

  cout << (*b).age << endl;
  cout << (*b).salary << endl;

  // or you can access by

  cout << b -> age << endl;
  cout << b -> salary << endl;

  return 0;
}