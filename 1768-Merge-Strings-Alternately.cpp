#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int a = 0;
        int b = 0;
        while(a < word1.size() && b < word2.size()){
            ans.push_back(word1[a++]);
            ans.push_back(word2[b++]);
        }

        while(a < word1.size()){
            ans.push_back(word1[a++]);
        }
        while(b < word2.size()){
            ans.push_back(word2[b++]);
        }
        return ans;
    }
};


int main(){
  Solution sol;

  string word1 = "abcd";
  string word2 = "pq";

  cout<<sol.mergeAlternately(word1, word2);
}