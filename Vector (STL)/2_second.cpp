#include <iostream>
#include <vector>
using namespace std;

int main() {

  // create vector, declare
  vector <int> v;
  vector <int> v1(5, 1);

  // size  and capacity of the vector
  cout << "Size of vector v is: " << v.size() << endl;
  cout << "Capacity of v is: " << v.capacity() << endl;

  v.push_back(23);
  v.push_back(2);
  v.push_back(3);

  cout << "Size of vector v is: " << v.size() << endl;
  cout << "Capacity of v is: " << v.capacity() << endl;

  //update value
  v[1] = 5;

  cout << "Size of vector v1 is: " << v1.size() << endl;
  cout << "Capacity of v1 is: " << v1.capacity() << endl;

  v1.push_back(5);

  cout << "Size of vector v1 is: " << v1.size() << endl;
  cout << "Capacity of v1 is: " << v1.capacity() << endl;

  vector <int> v3 = {2, 3, 5, 4, 66};
  // this initialization might be give error some compiler, it depends on the compiler

  // Delete value from vector
  vector <int> vnew;

  vnew.push_back(3);
  vnew.push_back(8);
  vnew.push_back(6);
  vnew.push_back(5);
  vnew.push_back(7);

  vnew.pop_back();

  cout << "Size of vector vnew is: " << vnew.size() << endl;
  cout << "Capacity of vnew is: " << vnew.capacity() << endl;

  vnew.erase(vnew.begin() + 1);

  cout << "Size of vector vnew is: " << vnew.size() << endl;
  cout << "Capacity of vnew is: " << vnew.capacity() << endl;

  //printing vector
  for(int i = 0; i < vnew.size(); i++) {
    cout << vnew[i] << " ";
  }

  //insert value
  vnew.insert(vnew.begin() + 1, 50);

  cout << endl;

  for (int i = 0; i < vnew.size(); i++)
  {
    cout << vnew[i] << " ";
  }

  // removing all element
  vnew.clear();

  cout << endl;

  cout << "Size of vector vnew is: " << vnew.size() << endl;
  cout << "Capacity of vnew is: " << vnew.capacity() << endl;

  vector <int> arr;

  arr.push_back(34);
  arr.push_back(3);
  arr.push_back(94);
  arr.push_back(394);

  cout << "Printing starting element: " << arr.front() << endl;
  cout << "Last element: " << arr.back() << endl;
  cout << "Printing starting element: " << arr[0] << endl;
  cout << "Last element: " << arr[arr.size() - 1] << endl;

  vector <int> a;

  // copy value of one vector to another

  a = arr;

  for(int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }

  // printing value with another method

  cout << endl;

  for(auto i: arr)
  cout << i << " ";

  return 0;
}