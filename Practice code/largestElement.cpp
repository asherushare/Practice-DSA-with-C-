#include <iostream>
using namespace std;

int secondLargest(int arr[], int size)
{
  if (size < 2)
  {
    cout << "Size must be greater than 2";
    return -1;
  }

  int firstLargest = arr[0];
  int secondLargest = arr[1];

  if (firstLargest < secondLargest)
  {
    swap(firstLargest, secondLargest);
  }

  for (int i = 2; i < size; i++)
  {
    if (arr[i] > firstLargest)
    {
      secondLargest = firstLargest;
      firstLargest = arr[i];
    }
    else if (firstLargest != arr[i] && secondLargest < arr[i])
    {
      secondLargest = arr[i];
    }
  }

  return secondLargest;
}

int main()
{
  int size;

  cout << "Enter the size of array: ";
  cin >> size;

  int arr[100];

  cout << "Enter " << size << " elements here: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int ans = secondLargest(arr, size);

  if (ans != -1)
  {
    cout << "Second largest element is: " << ans;
  }

  return 0;
}
