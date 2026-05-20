#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i = 0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
    }
};

int main(){
    Solution sol;
    int k;
    cout<<"Enter your ka value: ";
    cin>>k;
    vector<int> nums = {1,2,3,4,5,6,7};

    cout<<"Before rotate array: ";
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;

    sol.rotate(nums, k);
    cout<<"After rotate array: ";
    for(int num:nums){
        cout<<num<<" ";
    }
}