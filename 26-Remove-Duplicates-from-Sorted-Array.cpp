#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sum = 1;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] != nums[i]){
                nums[sum] = nums[i];
                sum++;
            }
        }
        return sum;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout<<"Total unique value is array: "<<sol.removeDuplicates(nums);
}