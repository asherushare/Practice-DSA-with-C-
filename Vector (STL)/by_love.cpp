#include <iostream>
#include <vector>
using namespace std;

// void print() {
//   cout << "This is Patra";
// }

// int sum(int a, int b) {
//   return a + b;
// }

int main() {

  // print();

  // cout << endl;

  // cout << sum(23, 3);

  vector <int> v;

  v.push_back(23);
  v.push_back(4);

  cout << "Size of vector v is: " << v.size() << endl;

  vector <pair <int, int>> vec;

  vec.push_back({23, 3});
  vec.push_back({5, 5});

  cout << "Size of vec pair is: " << vec.size();

  return 0;
}