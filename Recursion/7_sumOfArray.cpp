#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
  if(size <= 0) {
    return 0;
  }
    int sum = arr[0] + arr[1];
    int sum2 = sumArray(arr + 1, size - 1);
    int result = sum + sum2;

  return result;
}

int main() {

  int size; 
  cin >> size;

  cout << "Enter array elemets: " << endl;

  int arr[100];
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int final = sumArray(arr, size);
  cout << final << endl;

  return 0;
}