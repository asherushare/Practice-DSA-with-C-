#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int num)
{
  // Base case: factorial of 0 or 1 is 1
  if (num == 0 || num == 1)
  {
    return 1;
  }
  else
  {
    // Recursive case: num! = num * (num-1)!
    return num * factorial(num - 1);
  }
}

int main()
{
  int num;

  // Get user input
  cout << "Enter a number to find its factorial: ";
  cin >> num;

  // Calculate and display the factorial
  cout << "Factorial of " << num << " is: " << factorial(num) << endl;

  return 0;
}
