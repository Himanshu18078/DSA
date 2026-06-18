// Program to multiplt 2 matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int m;
  cout<<"Rows of first matrix : ";
  cin>>m;
  int n;
  cout<<"Column of first matrix : ";
  cin>>n;
  int p;
  cout<<"Rows of second matrix : ";
  cin>>p;
  int q;
  cout<<"Column of second matrix : ";
  cin>>q;
  if(n == p) {
    vector<vector<int>> Matrix1(m , vector<int>(n));
  cout<<"MATRIX 1 : "<<endl;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cout<<"Element at index ["<<i<<","<<j<<"] : ";
      cin>>Matrix1[i][j];
    }
  }
  
   for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cout<<Matrix1[i][j]<<" ";
    }cout<<endl;
  }
  cout<<"---------------------------"<<endl;
  vector<vector<int>> Matrix2(p,vector<int>(q));
  cout<<"MATRIX 2 : "<<endl;
  for(int i = 0; i < p; i++){
    for(int j = 0; j < q; j++){
      cout<<"Element at index ["<<i<<","<<j<<"] : ";
      cin>>Matrix2[i][j];
    }
  }
  for(int i = 0; i < p; i++){
    for(int j = 0; j < q; j++){
      cout<<Matrix2[i][j]<<" ";
    }cout<<endl;
  }

  vector<vector<int>> mulMatrix(m,vector<int>(q));
  for(int i = 0; i < m; i++){
    for(int j = 0 ; j < q; j++){
      mulMatrix[i][j] = 0;
      for(int k = 0; k < p;k++){
        mulMatrix[i][j] += Matrix1[i][k] * Matrix2[k][j];
      }
    }
  }
  cout<<"---------------------"<<endl;
  cout<<"Resultant Matrix"<<endl;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < q; j++){
      cout<<mulMatrix[i][j]<<" ";
    }cout<<endl;
  }
  }else{
    cout<<"-------------"<<endl;
    cout<<n<<"!="<<p<<endl;
    cout<<"Matrix Multiplication is not possible"<<endl;
  }
}
 
/*
MATRIX MULTIPLICATION RULES

1. Matrix multiplication is possible only if:
   (columns of first matrix) == (rows of second matrix)

   If A is m x n and B is n x p,
   then A × B is defined and the result is m x p.

2. To find an element C[i][j] in the result matrix:
   - Take row i from matrix A.
   - Take column j from matrix B.
   - Multiply corresponding elements.
   - Add all the products.

   Formula:
   C[i][j] = Σ (A[i][k] * B[k][j])

3. Algorithm:
   for each row i in A
       for each column j in B
           C[i][j] = 0
           for each k
               C[i][j] += A[i][k] * B[k][j]

4. Example:

   A = [1 2]
       [3 4]

   B = [5 6]
       [7 8]

   C[0][0] = (1*5) + (2*7) = 19
   C[0][1] = (1*6) + (2*8) = 22
   C[1][0] = (3*5) + (4*7) = 43
   C[1][1] = (3*6) + (4*8) = 50

   Result:
   C = [19 22]
       [43 50]

5. Dimensions:
   (m x n) × (n x p) = (m x p)
*/
