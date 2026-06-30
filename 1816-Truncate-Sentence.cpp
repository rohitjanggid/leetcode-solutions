#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string ans = "";
        for(auto i:s){
            if(i == ' '){
                count++;
            }
            if(count == k){
                break;
            }
            ans+=i;
        }
        return ans;
    }
};

int main() {
    Solution sol;

    string s = "Hello how are you Contestant";
    int k = 4;

    cout<<sol.truncateSentence(s, k);

    
}