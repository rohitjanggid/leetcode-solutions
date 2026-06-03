#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid  = s + (e-s)/2;

        while(s <= e){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }

            mid  = s + (e-s)/2;
        }
        return mid;
    }
};


int main(){
    Solution sol;

    vector<int> nums = {1, 3, 5, 7};
    int target = 5;

    cout<<sol.searchInsert(nums, target);
}