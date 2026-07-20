#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for(int i = 0; i<candies.size(); i++){
            bool result = true;
            for(int j = 0; j<candies.size(); j++){
                if(candies[i]+extraCandies < candies[j]){
                    result = false;
                }
            }
            ans.push_back(result);
        }
        return ans;
    }
};

int main(){
  Solution sol;

  vector<int> arr = {2,3,5,1,3};
  int extraArr = 3;

  vector<bool> res = sol.kidsWithCandies(arr, extraArr);

  for(bool i: res){
    cout<<i<<" ";
  }
}