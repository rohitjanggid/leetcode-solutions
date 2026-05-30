#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int l = 0;
        int r = height.size()-1;
        while(l < r){
            int minh = min(height[l], height[r]);
            if((r-l)*minh > maxi){
                maxi = (r-l)*minh;
            }

            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};


int main(){
    Solution sol;

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<<sol.maxArea(height);
}