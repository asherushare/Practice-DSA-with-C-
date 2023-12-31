#include <iostream>
using namespace std;

void update1(int n) {
  n++;
}

void update2(int &n) {
  n++;
}

int main() {

  // int i = 5;

  // int &j = i;
  int n = 6;

  cout << "Before update: " << n << endl;
  update1(n);
  cout << "after update: " << n << endl;
  update2(n);
  cout << "After calling update2: " << n << endl;



  // cout << i << endl << j << endl;

  return 0;
}