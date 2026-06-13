#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1; i<strs.size(); i++){
            while(strs[i].find(ans) != 0){
                ans.pop_back();
                if(ans == ""){
                    return "";
                }
            } 
        }
        return ans;
    }
};

int main(){
    Solution sol;

    vector<string> strs = {"flow", "flower", "flight"};

    cout<<sol.longestCommonPrefix(strs);
}