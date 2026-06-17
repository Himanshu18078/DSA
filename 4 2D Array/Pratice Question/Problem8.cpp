// Rotating a matrix by 90 degree
#include<iostream>
#include<vector>
using namespace std;
 void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() - 1;
        for(int i = 0; i <= n ; i++){
            for(int j = n; j >= 0; j--){
                cout<<matrix[j][i] <<" ";
            }
            cout<<endl;
        }  
    }