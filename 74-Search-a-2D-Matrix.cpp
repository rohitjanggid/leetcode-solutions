#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col -1;

        while(start <= end){
            int mid = start + (end-start)/2;

            int element = matrix[mid/col][mid%col];
            
            if(element == target){
                return true;
            }

            else if(element < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
};

int main(){
    Solution sol;

    int target;
    cout<<"Give your target: ";
    cin>>target;

    vector<vector<int>> martix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    cout<<sol.searchMatrix(martix, target);

}