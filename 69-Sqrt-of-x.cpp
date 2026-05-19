#include <iostream>
using namespace std;

class Solution {
public:
    long long int binarySearch(int n){
        long long int ans;
        int start = 0;
        int end = n;
        while(start <= end){
            long long int mid = start +(end - start)/2;
            long long int square = mid * mid;
            if(square > n){
                end = mid-1;
            }
            else if(square < n){
                ans = mid;
                start = mid +1;
            }
            else{
                return mid;
            }
        }
        return ans;
    }

    int mySqrt(int n) {
        return binarySearch(n);
    }
};


int main(){
    Solution sol;
    int n;
    cout<<"Enter your value: ";
    cin>>n;
    cout<<"Sqrt(x) is :"<<sol.mySqrt(n);

}