#include <iostream>
using namespace std;

class Stack {

  public:
    int top;
    int *arr;
    int size;

  Stack(int s) {
    top = -1;
    size = s;
    arr = new int[size];
  }

  int push(int element) {
    if(size - top > 1) {
      top++;
      arr[top] = element;
      return 0;
    }
    else {
      cout << "Stack is overflow.";
      return -1;
    }
  }

  void pop() {
    if(top != -1) {
      top--;
    }
    else {
      cout << "Stack is empty.";
    }
  }

  bool isEmpty() {
    if(top == -1) {
      return true;
    }
    else {
      return false;
    }
  }

  int peek() {
    if(top >= -1) {
      return arr[top];
    }
    else {
      return -1;
    }
  }

};

int main() {

  Stack st(5);
  cout << "The size of array is: " << st.size;

  return 0;
}