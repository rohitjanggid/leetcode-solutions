#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};


int main(){
    Solution sol;

    vector<int> nums = {1, 2, 3, 4};
    
    vector<int> result = sol.runningSum(nums);

    for(int i: result){
        cout<<i<<" ";
    }
}