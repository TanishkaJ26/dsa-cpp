#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums){
  int duplicate = -1, missing = -1;

  //find duplicate
  for(int num: nums){
    int idx = abs(num) - 1;
    if(nums[idx] < 0){
      duplicate = abs(num);
    }
    else{
      nums[idx] = -nums[idx];
    }
  }

  //find missing
  for(int i=0;i<nums.size();i++){
    if(nums[i] > 0){
      missing = i + 1;
      break;
    }
  }

  return {duplicate, missing};
}

int main(){
  vector<int> nums = {1,2,2,4};
  vector<int> ans = findErrorNums(nums);
  cout << ans[0] << " " << ans[1] << endl;
  return 0;
}