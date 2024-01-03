#include <iostream>
using namespace std;

class student {
  public:
    string name;
    int age;
    bool gender;
};

int main() {

  student s1;
  s1.name = "Patra Kirsani";
  s1.age = 21;
  s1.gender = 1;

  cout << "Student name is: " << s1.name << endl;
  cout << "Age is: " << s1.age << endl;
  cout << "Gender is: " <<s1.gender << " that means male." << endl;

  student s[2];

  for(int i = 0; i < 2; i++) {
    cout << "Name = ";
    cin >> s[i].name;
    cout << "Age = ";
    cin >> s[i].age;
    cout << "Gender = ";
    cin >> s[i].gender;
  }



  return 0;
}