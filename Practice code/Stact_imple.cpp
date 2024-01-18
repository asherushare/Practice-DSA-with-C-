//Stack implementation

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
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  bool isEmpty()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void push(int element)
  {
    if (top == size - 1)
    {
      cout << "Stck is overflow";
    }
    else
    {
      top++;
      arr[top] = element;
    }
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Stack is underflow";
    }
    else
    {
      top--;
    }
  }

  int peek()
  {
    if(isEmpty()) {
      cout << "Stack is empty";
      return -1;
    }
    else {
      return arr[top];
    }
  }
};
int main()
{

  Stack s(5);

  s.push(3);

  s.push(23);
  s.push(43);
  // s.push(5)
  // s.po

  cout << "Peeked element: " << s.peek() << endl;

  return 0;
}