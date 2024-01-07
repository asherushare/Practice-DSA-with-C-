#include <iostream>
using namespace std;

class Queue
{
public:
  int front;
  int rear;
  int *arr;
  int size;

  Queue(int size)
  {
    front = -1;
    rear = -1;
    this->size = size;
    arr = new int[size];
  }

  bool isFull()
  {
    return (front == 0 && rear == size - 1) || (front == rear + 1);
  }

  bool isEmpty()
  {
    return front == -1;
  }

  void enqueue(int element)
  {
    if (isFull())
    {
      cout << "Queue is Full" << endl;
    }
    else
    {
      if (front == -1)
      {
        front = 0;
      }
      rear = (rear + 1) % size;
      arr[rear] = element;
    }
  }

  void dequeue()
  {
    if (isEmpty())
    {
      cout << "Queue is Empty" << endl;
    }
    else
    {
      if (front == rear)
      {
        front = -1;
        rear = -1;
      }
      else
      {
        front = (front + 1) % size;
      }
    }
  }

  int frontElement()
  {
    if (isEmpty())
    {
      cout << "Queue is Empty" << endl;
      return -1;
    }
    else
    {
      return arr[front];
    }
  }
};

int main()
{
  Queue *myQueue = new Queue(5); // Create a dynamic object of the Queue class

  // Use the object to call queue methods
  myQueue->enqueue(10);
  myQueue->enqueue(20);

  cout << "Front element: " << myQueue->frontElement() << endl;

  myQueue->dequeue();

  cout << "Front element after dequeue: " << myQueue->frontElement() << endl;

  delete myQueue; // Release memory for the dynamic object

  return 0;
}
