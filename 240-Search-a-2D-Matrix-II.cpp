#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col-1;

        while(rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return true;
            }
            else if(element < target){
                rowIndex++;
            }
            else{
                colIndex--;
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