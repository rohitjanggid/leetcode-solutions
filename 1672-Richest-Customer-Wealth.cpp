#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        int ans = 0;
        for(int i=0; i<row; i++){
            int sum = 0;
            for(int j=0; j<col; j++){
                sum += accounts[i][j];
            }
            if(sum > ans){
                ans = sum;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;

    vector<vector<int>> nums = {{1, 2, 3}, {3, 2, 1}};

    cout<<sol.maximumWealth(nums);
}