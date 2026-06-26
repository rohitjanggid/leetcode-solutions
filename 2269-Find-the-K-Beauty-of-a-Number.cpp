#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int value = num;
        int cnt = 0;
        long long digit = pow(10, k);

        while(value  >= pow(10, k-1)){
            int rem = value % digit;
            if(rem != 0 && num % rem == 0){
                cnt++;
            }
            value = value/10;
        }
        return cnt;
    }
};

int main(){
    Solution sol;

    int num, k;
    cout<<"Enter your main value: ";
    cin>>num;
    cout<<"Enter your length or substring: ";
    cin>>k;

    cout<<"divisor value is: "<<sol.divisorSubstrings(num, k);
}