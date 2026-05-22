#include <iostream>
#include <vector>
#include<cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0; 
        int e = s.size()-1;
        while(st < e){
            if(!isalnum(static_cast<unsigned char>(s[st]))){
                st++;
            } 
            else if(!isalnum(static_cast<unsigned char>(s[e]))){
                e--;
            }
            else{
                if(tolower(static_cast<unsigned char>(s[st])) != tolower(static_cast<unsigned char>(s[e]))){
                    return false;
                }
                st++;
                e--;
            }
        }
        return true;
    }
};

int main(){
    Solution sol;

    string custon_line;
    cout<<"Enter your line: ";
    getline(cin, custon_line);

    if(sol.isPalindrome(custon_line)){
        cout<<"Line is palindrome.";
    }
    else{
        cout<<"Line is not palindrome.";
    }
}