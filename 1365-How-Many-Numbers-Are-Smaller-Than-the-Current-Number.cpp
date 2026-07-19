#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>arr;
        for(int i=0; i<nums.size(); i++){
            int count = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[i] > nums[j]){
                    count++;
                }
            }
            arr.push_back(count);
        }
        return arr;
    }
};


int main(){
    Solution sol;

    vector<int> nums = {8, 1, 2, 2, 3};

    vector<int>ans = sol.smallerNumbersThanCurrent(nums);

    for(int i: ans){
        cout<<i<<" ";
    }
}