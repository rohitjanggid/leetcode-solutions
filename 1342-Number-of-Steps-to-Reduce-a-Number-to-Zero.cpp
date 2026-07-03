#include<iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num != 0){
            if(num%2 == 0){
                num = num/2;
            }
            else{
                num--;
            }
            count++;
        }
        return count;
    }
};

int main() {
    Solution sol;

    int n;
    cout<<"Enter your number: ";
    cin>>n;

    cout<<"Number of steps to reduce "<<n<<" to 0 is: "<<sol.numberOfSteps(n);
}