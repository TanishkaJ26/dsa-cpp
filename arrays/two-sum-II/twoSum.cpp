#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target) {
  int start = 0, end = numbers.size() - 1, currSum = 0;
  vector<int> arr;

  while (start < end) {
    int currSum = numbers[start] + numbers[end];

    if (currSum == target) {
      arr.push_back(start + 1);
      arr.push_back(end + 1);
      return arr;
    }

    if (currSum < target) {
      start++;
    }

    if (currSum > target) {
      end--;
    }
  }
  return arr;
}

int main() {
  vector<int> num = {2, 7, 11, 15};
  int target = 9;
  vector<int> ans = twoSum(num, target);
  cout << '[' << ans[0] << " , " << ans[1] << ']';
  return 0;
}