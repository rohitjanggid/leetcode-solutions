#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string empty = "";
        for(int i = 0; i<words.size(); i++){

            string data = words[i];
            int s = 0;
            int e = data.size()-1;
            bool found = false;
            while(s < e){
                if(data[s] != data[e]){
                    found = true;
                }
                s++;
                e--;
            }
            if(found == false){
                return data;
            }
        }
        return empty;
    }
};

int main(){
    Solution sol;

    vector<string> arr = {"abc","car","ada","racecar","cool"};

    string ans = sol.firstPalindrome(arr);

    for(char i: ans){
        cout<<i;
    }
}