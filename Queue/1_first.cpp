#include <bits/stdc++.h>
using namespace std;

int main() {

  queue <int> q;

  q.push(23);
  q.push(243);
  q.push(56);

  cout << "Size: " << q.size() << endl;
  q.pop();

  cout << "isEmpty: " << q.empty() << endl;

  cout << "Size " << q.size() << endl;

  cout << "Front: " << q.front() << endl;

  return 0;
}