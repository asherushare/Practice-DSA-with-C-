#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector <int> v;

  v.push_back(23);
  v.push_back(2);
  v.push_back(823);
  v.push_back(8);

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  cout << endl;

  cout << "Sorted vector is: ";

  // sort(v.begin(),v.end());

  cout << v.front();
  cout << endl;
  cout << v.back() <<endl;
  cout << v.empty() <<endl;

  

  // for(auto i+ = v.begin(); i+ != v.end(); i+++) {
  //   cout << *i+ << " ";
  // }

  // vector <int> a(5);
  // for(int i = 0; i < 5; i++ ) {
  //   cin >> v[i];
  // }

  v.pop_back();
  v.erase(v.begin()+2);
  v.clear();

  cout << v.empty();


  return 0;
}