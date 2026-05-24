#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if (matrix.empty() || matrix[0].empty()) {
            return {}; 
        }

        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> ans;
        int count = 0;
        int total = row*col;

        // indexs
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        while(count < total){ 

            // pring first row
            for(int i=startingCol; count<total && i<=endingCol; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // pring last col
            for(int i=startingRow; count<total && i<=endingRow; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // pring last row
            for(int i=endingCol; count<total && i>=startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // pring first col
            for(int i = endingRow; count<total && i>=startingRow; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;

        }
        return ans;
    }
};

// VS Code mein run karne ke liye main function
int main() {
    Solution solution;

    // Ek sample 3x4 matrix banaya hai test karne ke liye
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------" << endl;

    // Function ko call kiya
    vector<int> result = solution.spiralOrder(matrix);

    // Result ko print kiya
    cout << "Spiral Order Output:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}