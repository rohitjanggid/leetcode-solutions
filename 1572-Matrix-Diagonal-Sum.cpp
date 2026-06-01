#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i=0;
        int j=0;
        int sum = 0;
        while(i < mat.size()){
            sum += mat[i][j];
            i++;
            j++;
        }
        i = mat.size()-1;
        j = 0;
        while(i >= 0){
            if(i != j){
                sum += mat[i][j];
            }
            i--;
            j++;
        }
        return sum;
    }
};


int main(){
    Solution sol;

    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout<<sol.diagonalSum(mat);
}