#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0; 
        while(i< nums.size()){
            if(i != nums[i]){
                return i;
            }
            i++;
        }
        return i;
    }
};
 
int main(){
    Solution sol;

    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    cout<<sol.missingNumber(nums);
}