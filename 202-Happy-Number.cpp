#include<iostream>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        if(n == 1){
            return true;
        }
        if(n == 4){
            return false;
        }
        int ans  = 0;
        while(n != 0){
            int rem = n%10;

            ans += rem * rem;
            n = n/10;
        }
        return isHappy(ans);
    }
};

int main(){

    Solution sol;

    int n;
    cout<<"Enter your number: ";
    cin>>n;

    cout<<sol.isHappy(n);
}