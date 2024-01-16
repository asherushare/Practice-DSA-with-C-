#include <iostream>
using namespace std;

class Patra {
  public:
  int age;
  char grade;
  int id;

  Patra() {
    age = 23;
    grade = 'B';
    id = 23;
  }
};

int main() {

  Patra p;

  cout << "The size of the class is: " << sizeof(p) << endl;

  return 0;
}