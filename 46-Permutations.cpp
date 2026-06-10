#include<iostream>
#include<vector>

using namespace std;

class Solution {
private: 
    void solve(vector<int> nums, int index, vector<vector<int>> &ans){
        // base case 
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j = index; j<nums.size(); j++){
            swap(nums[index], nums[j]);
            solve(nums, index+1, ans);
            // backtrack
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> ans;

        solve(nums, index, ans);
        return ans;
    }
};

int main(){
    Solution sol;
    
    vector<int> nums = {1, 2, 3}; 
    
    vector<vector<int>> result = sol.permute(nums);

    cout << "All subsets are:\n";
    cout << "[ ";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;

    return 0;
}