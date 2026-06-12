#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxsum = 0;
        for(int i=0; i<k; i++){
            maxsum += nums[i];
        }

        int newsum = maxsum;
        for(int i=k; i<nums.size(); i++){
            newsum  = newsum - nums[i-k] + nums[i];
            if(newsum > maxsum ){
                maxsum = newsum;
            }
        }
        double ans = double(maxsum)/k;
        return ans;
    }
};


int main() {
    Solution sol;

    vector<int>nums = {1,12,-5,-6,50,3};
    int k = 4;

    cout<<sol.findMaxAverage(nums, k);
}