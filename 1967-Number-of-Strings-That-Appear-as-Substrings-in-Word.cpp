#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for(int i = 0; i<patterns.size(); i++){
            if(word.find(patterns[i]) != std::string::npos){
                ans++;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;

    vector<string> patterns = {"a","abc","cd","d"};
    string word = "abc";

    cout<<sol.numOfStrings(patterns, word);
}