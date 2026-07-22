#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int curr = 0;
        for(int i = 0; i<gain.size(); i++){
            curr += gain[i];
            if(curr > maxi){
                maxi = curr;
            }
        }
        return maxi;
    }
};

int main(){
  Solution sol;

  vector<int> gain = {-5,1,5,0,-7};
  

  cout<<sol.largestAltitude(gain);
}