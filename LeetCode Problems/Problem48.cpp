#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> temp(n, vector<int>(n));

    // Traverse each column of the original matrix
    for (int i = 0; i < n; i++) {

        // Read the current column from bottom to top
        // and store it as a row in the temporary matrix
        for (int j = n - 1, k = 0; j >= 0; j--, k++) {
            temp[i][k] = matrix[j][i];
        }
    }

    matrix = temp;
}