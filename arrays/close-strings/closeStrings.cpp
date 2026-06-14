#include <iostream>
#include <algorithm>
using namespace std;

bool closeStrings(string word1, string word2)
{
  // comparing length
  if (word1.length() != word2.length())
  {
    return false;
  }

  // calculating frequency of characters in strings
  int freq1[26] = {0};
  int freq2[26] = {0};

  for (char ch : word1)
  {
    freq1[ch - 'a']++;
  }
  for (char ch : word2)
  {
    freq2[ch - 'a']++;
  }

  // verifying whether both strings contains the same characters
  for (int i = 0; i < 26; i++)
  {
    if ((freq1[i] != 0 && freq2[i] == 0) || (freq1[i] == 0 && freq2[i] != 0))
    {
      return false;
    }
  }

  // sorting frequency arrays to compare the frequency distribution
  sort(freq1, freq1 + 26);
  sort(freq2, freq2 + 26);

  for (int i = 0; i < 26; i++)
  {
    if (freq1[i] != freq2[i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  cout << closeStrings("abc", "bca") << endl;       // true -> 1
  cout << closeStrings("a", "aa") << endl;          // false -> 0
  cout << closeStrings("cabbba", "abbccc") << endl; // true -> 1
  return 0;
}