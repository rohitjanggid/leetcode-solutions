#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";

        string res = "";
        bool isNegative = (num<0);

        long long n = abs(num);

        while(n > 0){
            res += to_string(n%7);
            n = n/7;
        }

        reverse(res.begin(), res.end());

        if(isNegative){
            res = "-" + res;
        }
        return res;
    }
};

int main(){

    Solution sol;

    int n;
    cout<<"enter your value: ";
    cin>>n;

    cout<<sol.convertToBase7(n);

}