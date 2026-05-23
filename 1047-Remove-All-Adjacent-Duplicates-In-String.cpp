#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        for(int i = 0; i+1<s.length(); ){
            if(s[i] == s[i+1]){
                s.erase(i, 2);
                i = 0;
            }
            else{
                i++;
            }
        }
        return s;
    }
};


int main(){
    Solution sol;
    string s;
    cout<<"Give your value: ";
    getline(cin, s);

    cout<<sol.removeDuplicates(s);
}