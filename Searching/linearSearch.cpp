#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key) {
  for(int i = 0; i < size; i++) {
    if(arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {

  int size;
  int arr[100];
  int key;

  cout << "Enter the size of the array: ";
  cin >> size;


  cout << "Enter array elements: ";

  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Array elements are: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  cout << "Enter the key element: ";
  cin >> key;

  cout << "Present or Not: " << LinearSearch(arr, size, key);
  
  return 0;
}