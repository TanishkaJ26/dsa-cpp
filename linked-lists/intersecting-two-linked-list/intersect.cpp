#include <iostream>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

Node *getIntersectionNode(Node *headA, Node *headB)
{
  Node *A = headA, *B = headB;
  while (A != B)
  {
    A = A == NULL ? headB : A->next;
    B = B == NULL ? headA : B->next;
  }
  return A;
}

int main()
{
  Node *head1 = new Node(10);
  head1->next = new Node(20);
  head1->next->next = new Node(30); // 10 -> 20 -> 30

  Node *head2 = new Node(5);
  head2->next = new Node(15); // 5 -> 15

  Node *common = new Node(40);
  common->next = new Node(50);
  common->next->next = new Node(60); // 40 -> 50 -> 60

  head1->next->next->next = common; 
  head2->next->next = common; 

  Node *intersection = getIntersectionNode(head1, head2);

  if (intersection != NULL)
    cout << "Intersection point: " << intersection->val << endl;
  else
    cout << "No intersection" << endl;

  return 0;
}