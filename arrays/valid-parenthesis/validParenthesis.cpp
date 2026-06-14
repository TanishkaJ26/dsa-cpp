#include <iostream>
using namespace std;

bool isValid(string s)
{
  // creating character array
  char arr[100000];
  int top = -1;

  // traversing string and pushing brackets into array based stack
  for (char ch : s)
  {
    if (ch == '(' || ch == '[' || ch == '{')
    {
      arr[++top] = ch;
    }
    else
    {
      if (top == -1)
      {
        return false;
      }
      if (ch == '}' && arr[top] != '{')
      {
        return false;
      }
      if (ch == ')' && arr[top] != '(')
      {
        return false;
      }
      if (ch == ']' && arr[top] != '[')
      {
        return false;
      }
      top--;
    }
  }
  return (top == -1);
}

int main()
{
  cout << isValid("{}()[]") << endl;  //true -> 1
  cout << isValid("[]") << endl;      //true -> 1
  cout << isValid("(]") << endl;      //false -> 0
  cout << isValid("([])") << endl;    //true -> 1
  cout << isValid("([)]") << endl;    //false -> 0
  return 0;
}