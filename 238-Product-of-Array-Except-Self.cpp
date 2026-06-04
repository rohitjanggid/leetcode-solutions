#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1;
        int right = 1;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            if(i == 0){
                ans.push_back(left);
            }
            else{
            left *= nums[i-1];
            ans.push_back(left);
            }
        }

        for(int i = nums.size()-1; i>=0; i--){
            if(i == nums.size()-1){
                ans[i] = (ans[i] * right);
            }
            else{
                right *= nums[i + 1];
                ans[i] = ans[i] * right;
            }
        }
        return ans;
    }
};


int main(){
    Solution sol;

    vector<int> nums = {1, 2, 3, 4};

    //print input
    for(int num: nums){
        cout<<num<<" ";

    } 
    vector<int> result = sol.productExceptSelf(nums);


    // print output 
    cout<<endl;
    for(int res: result){
        cout<<res<<" ";
    }
}