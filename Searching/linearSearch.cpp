#include <iostream>
using namespace std;

int main() {

  int size; 
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[100];

  cout << "Enter array elements: ";

  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Array elements are: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}