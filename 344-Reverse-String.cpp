#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};


int main(){
    Solution sol;

    vector<char> name = {'h', 'e', 'l', 'l', 'o'};

    cout<<"Orignal Array:";
    for(char c : name){
        cout<<c;
    }
    cout<<endl;

    sol.reverseString(name);

    cout<<"After Reverse Array: ";
    for (char c : name){
        cout<<c;
    }
    cout<<endl;
}