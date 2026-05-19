#include<iostream>
#include<vector>
#include<print>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 1;
        while(j < nums.size()){
            if(nums[i] != 0){
                i++;
                j++;
            }
            else if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else if(nums[j] == 0){
                j++;
            }
        }
    }
};


int main(){
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};


    cout<<"Before Move Zeroes: ";
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;

    sol.moveZeroes(nums);
    cout<<"After Move Zeroes: ";
    for(int num: nums){
        cout<<num<<" ";
    }
}