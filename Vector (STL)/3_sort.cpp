#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  vector <int> arr;

  arr.push_back(49);
  arr.push_back(60);
  arr.push_back(7);
  arr.push_back(9);

  cout << "Array elements are: ";
  for(auto i: arr)
  cout << i << " ";

  cout << endl;

  // sort in increasing order

  sort(arr.begin(), arr.end());

  cout << "Sorted elements are: ";
  for(auto i: arr)
  cout << i << " ";

  cout << endl;

  // sort in decreasing order

  sort(arr.begin(), arr.end(), greater <int> ());

  cout << "Sorting in discending order: ";
  for(auto i: arr)
  cout << i << " ";

  cout << endl;

  // another method to sort in discending order

  sort(arr.rbegin(), arr.rend());

  cout << "Sorted array in discending order: ";
  for(auto i: arr)
  cout << i << " ";

  cout << endl;

  // search in binary search

  cout << binary_search(arr.begin(), arr.end(), 7);
  cout << endl;

  return 0;
}