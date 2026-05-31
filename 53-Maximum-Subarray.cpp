#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            maxi = max(sum, maxi);

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<"largest sum or subarry is: "<<sol.maxSubArray(nums);
}