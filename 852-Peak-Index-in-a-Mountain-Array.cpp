#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = start + (end - start)/2;
        while(start < end){
            if(arr[mid] < arr[mid+1]){
                start = mid+1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return start;
    }
};

int main(){
    Solution sol;
    vector<int> arr = {0, 10, 5, 2};

    int peakIndex = sol.peakIndexInMountainArray(arr);

    cout<<"Peak element ka index hai: "<<peakIndex<<endl;
    cout<<"peak value hai: "<<arr[peakIndex];

    return 0;
}