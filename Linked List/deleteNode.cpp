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

Node *delhead(Node *head) {
  if(head == NULL) {
    return NULL;
  }
  else {
    Node *temp = head -> next;
    delete head;
    return temp;
  }
}

int main() {

  Node *head = new Node(23);
  Node *second = new Node(44);

  cout << head -> data << endl;

  delhead(head);

  cout << head -> data << endl;

  return 0;
}