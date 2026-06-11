#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};


int main() {
    Solution sol;

    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = sol.sortedSquares(nums);

    for(int i: result){
        cout<<i<<" ";
    }
}