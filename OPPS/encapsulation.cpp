// Applications
//  - Data hiding
//  - If we want, we can make class "read only"
//  - Unit tasing




#include <iostream>
using namespace std;

class Student {
  string name;
  int age;
  int height;

  public:
  int getAge() {
    return age;
  }
};

class Patra {
  int age;
  int salary;
};

int main() {

  Student first;

  cout << "Sub sahi chal raha hai" << endl;

  return 0;
}