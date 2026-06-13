#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int n = s.length()-1;
        while(n >=0 && s[n] == ' ') n--;
        for(int i=n; i>=0; i--){
            if(s[i] != ' '){
                len++;
            }
            else{
                break;
            }
        }
        return len;
    }
};

int main(){
    Solution sol;

    string s = "   fly me   to   the moon  ";

    cout<<sol.lengthOfLastWord(s); 
}