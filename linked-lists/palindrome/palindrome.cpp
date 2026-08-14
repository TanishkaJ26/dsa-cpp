#include <iostream>
#include <vector>
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

bool isPalindrome(Node *head)
{
  vector<int> arr;

  Node *temp = head;

  while (temp != NULL)
  {
    arr.push_back(temp->val);
    temp = temp->next;
  }

  int i = 0;
  int j = arr.size() - 1;

  while (i < j)
  {
    if (arr[i] != arr[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main()
{
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(2);
  head->next->next->next = new Node(1);
  cout << isPalindrome(head) << endl;
  return 0;
}