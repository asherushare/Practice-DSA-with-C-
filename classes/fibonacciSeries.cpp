// Program to generate fibonacci sequence up to a certain number

#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter the value of N: ";
  cin >> n;

  int t1 = 0;
  int t2 = 1;
  int nextTerm = 0;

  // Displays the first two terms which is always 0 and 1
  
  cout << "Fibonacci series: " << t1 << ", " << t2 << ", ";

  nextTerm = t1 + t2;

  while(nextTerm < n) {
    cout << nextTerm << ", ";
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}