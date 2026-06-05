#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int mid = 0; 
        int end = nums.size()-1;

        while(mid <= end){
            if(nums[mid] == 0){
                swap(nums[start], nums[mid]);
                mid++;
                start++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[end]);
                end--;
            }
        }
    }
};

int main(){

    Solution sol;

    vector<int> nums = {2, 1, 0, 2, 1, 1, 0};

    cout<<"Before Sort: "<<endl;
    for(int i: nums){
        cout<<i<<" ";
    }
    cout<<endl;

    sol.sortColors(nums);

    cout<<"After sort: "<<endl;
    for(int i: nums){
        cout<<i<<" ";
    }
}