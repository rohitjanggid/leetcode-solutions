#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0;
        while(n < nums.size()){
            ans.push_back(nums[i++]);
            ans.push_back(nums[n++]);
        }
        return ans;
    }
};

int main(){
  Solution sol;

  vector<int> arr = {2,5,1,3,4,7};
  int n = 3;

  vector<int>ans = sol.shuffle(arr, n);

  for(int i: ans){
    cout<<i<<" ";
  }
}