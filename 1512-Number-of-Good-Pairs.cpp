#include<iostream>
#include<vector>


using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] == nums[j])
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 1, 1, 3};

    cout<<sol.numIdenticalPairs(nums);
}