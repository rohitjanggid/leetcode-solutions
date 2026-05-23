#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part)<s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main(){
    Solution sol;
    string s, part;

    cout<<"Give your parant string: ";
    getline(cin, s);
    cout<<"Give your Child string: ";
    getline(cin, part);

    cout<<sol.removeOccurrences(s, part);;
}