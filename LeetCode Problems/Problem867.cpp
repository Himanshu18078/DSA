#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {

    // Number of rows in the original matrix
    int row = matrix.size();

    // Number of columns in the original matrix
    int column = matrix[0].size();

    // Create a new matrix for the transpose.
    // Transposed matrix dimensions become:
    // rows = original columns
    // columns = original rows
    vector<vector<int>> t(column, vector<int>(row));

    // Traverse the transpose matrix
    for (int i = 0; i < column; i++) {

        for (int j = 0; j < row; j++) {

            // Copy element from original matrix
            // Original position:  matrix[j][i]
            // New position:       t[i][j]
            //
            // Example:
            // Original:
            // 1 2 3
            // 4 5 6
            //
            // Transpose:
            // 1 4
            // 2 5
            // 3 6
            //
            // Notice how rows and columns are swapped.
            t[i][j] = matrix[j][i];
        }
    }

    // Return the transposed matrix
    return t;
}