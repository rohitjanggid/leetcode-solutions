#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> arr(n+1, 0);
        for(int i = 0; i<n; i++){
            arr[nums[i]]++;
        }
        for(int i = 1; i<=n; i++){
            if(arr[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> res = sol.findDisappearedNumbers(nums);

    for(int i: res){
        cout<<i<<" ";
    }
}