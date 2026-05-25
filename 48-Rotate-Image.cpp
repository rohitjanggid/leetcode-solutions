#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // transpose array
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                    swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse row
        int row = 0;
        while(row < n){
            int endingCol = n-1;
            for(int i=0; i<endingCol; i++){
                swap(matrix[row][i], matrix[row][endingCol]);
                endingCol--;
            }
            row++;
        }
    }
};


int main(){
    Solution sol;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    sol.rotate(matrix);
    for(const auto& row: matrix){
        for(int val: row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}