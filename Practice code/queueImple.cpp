#include <iostream>
using namespace std;

class Queue {

public:
  int *arr;
  int front;
  int rear;
  int size;

  Queue(int size) {
    this -> size = size;
    arr = new int[size];
    front = -1;
    rear = size - 1;
  }

  void enqueue(int element) {
    if(rear == size -1) {
      cout << "Queue is full with elements.";
    }
    else {
      rear++;
      arr[rear] = element;
    }
    if(front == -1) {
      front++;
    }
  }

  void dequeue() {
    if(front == -1 || front > rear) {
      cout << "No elements in queue" << endl;
      return;
    }
    else {
      front++;
    }
  }

  int peek() {
    if(front == -1 || front > rear) {
      cout << "No elements in queue";
      return -1;
    }
    else {
      return arr[front];
    }
  }

  bool empty() {
    if(front == -1 || front > rear) {
      return true;
    }
    else {
      return false;
    }
  }
};

int main() {

  Queue myqueue(10);
  myqueue.enqueue(2);
  myqueue.enqueue(23);

  cout << "Front element is: " << myqueue.peek() << endl;

  return 0;
}