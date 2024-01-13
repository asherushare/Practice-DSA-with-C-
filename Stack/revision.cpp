#include <iostream>
using namespace std;

class Stack
{
public:
  int size;
  int *arr;
  int top;

  Stack(int size)
  {
    top = -1;
    this->size = size; // Corrected variable name conflict
    this->arr = new int[size];
  }

  void push(int element)
  { // Corrected return type
    if (top == size - 1)
    {
      cout << "Stack is full";
    }
    else
    {
      top++;
      arr[top] = element;
    }
  }

  void pop()
  { // Corrected return type
    if (top == -1)
    {
      cout << "Stack is empty.";
    }
    else
    {
      top--;
    }
  }

  void isEmpty()
  { // Corrected return type and printing
    if (top == -1)
    {
      cout << "Stack is empty.";
    }
    else
    {
      cout << "Stack is not empty.";
    }
  }

  int Peek()
  {
    if (top != -1)
    {
      return arr[top];
    }
    else
    {
      cout << "Stack is empty.";
      return -1; // Added a return value
    }
  }
};

int main()
{

  Stack s(34);

  cout << "The size of the stack is: " << sizeof(s) << endl;
  int a = s.Peek(); // Corrected function call
  s.isEmpty();      // Corrected function call

  return 0;
}
