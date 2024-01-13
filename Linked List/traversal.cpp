#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

void printList(Node *head)
{
  Node *curr = head;
  while (curr != NULL)
  {
    cout << (curr->data) << endl;
    curr = curr->next;
  }
}

int main() {

  Node *head = new Node(23);
  head -> next = new Node(233);
  head -> next -> next = new Node(34);
  head -> next -> next -> next = new Node(89);

  printList(head);

  return 0;
}