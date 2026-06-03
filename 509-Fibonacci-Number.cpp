#include<iostream>

using namespace std;

class Solution {
public:
    int fib(int n) {
        // base case
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }

        
        return fib(n-1) + fib(n-2);
        
    }
};


int main(){
    Solution sol;

    int n;
    cout<<"Enter your Index: ";
    cin>>n;

    cout<<"you fibonacci value is: "<<sol.fib(n)<<endl;
}