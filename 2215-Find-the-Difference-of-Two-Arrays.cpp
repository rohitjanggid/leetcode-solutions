#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int>ans1;
        vector<int>ans2;
        // for ans1;
        for(int i = 0; i<nums1.size(); i++){
            bool found = false;
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                }
            }
            if(found == false){
                if(find(ans1.begin(), ans1.end(), nums1[i]) == ans1.end()){
                    ans1.push_back(nums1[i]);
                }
            }
        }

        // for ans 2
        for(int i = 0; i<nums2.size(); i++){
            bool found = false;
            for(int j = 0; j<nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    found = true;
                }
            }
            if(found == false){
                if(find(ans2.begin(), ans2.end(), nums2[i]) == ans2.end()){
                    ans2.push_back(nums2[i]);
                }
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};

int main(){
    Solution sol;

    vector<int> nums1 = {1,2,3,3,4,5};
    vector<int> nums2 = {1,1,2,2,6,7,8,11};

    vector<vector<int>> res = sol.findDifference(nums1, nums2);

    for(int i = 0; i<res.size(); i++){
        for(int j = 0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}