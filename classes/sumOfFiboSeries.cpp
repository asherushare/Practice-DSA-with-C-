#include <iostream>
using namespace std;

int main()
{

  int i, n, first = 0, second = 1, sum = 1, third;

  cout << " Enter the range: ";
  cin >> n;

  for (i = 2; i < n; i++)
  {

    /* Print the sum of previous two element */

    third = first + second;

    sum = sum + third;

    first = second;
    second = third;
  }

  cout << "Sum of Fibonacci series for given range is " << sum;

  return 0;
}