#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i < j){
            if(nums[i]%2 == 0){
                i++;
            }
            else if(nums[j]%2 != 0){
                j--;
            }
            else if(nums[i]%2 != 0 && nums[j]%2 == 0){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {3,1,2,4};

    vector<int> res = sol.sortArrayByParity(nums);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}