#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(int i=0; i<address.size(); i++){
            if(address[i] != '.'){
                ans.push_back(address[i]);
            }
            else{
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;

    string address = "1.1.1.1.1";

    cout<<sol.defangIPaddr(address);
}