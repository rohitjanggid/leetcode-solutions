#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(); 
        int col = matrix[0].size();

        vector<int> rowZero(row, 1);
        vector<int> colZero(col, 1);
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(matrix[i][j] == 0){
                    rowZero[i] = 0;
                    colZero[j] = 0;
                }
            }
        }
        for(int i= 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(rowZero[i] == 0 || colZero[j] == 0){
                     matrix[i][j] = 0;
                }
            }
        }
    }
};

int main(){

    Solution sol;

    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    sol.setZeroes(matrix);

    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}