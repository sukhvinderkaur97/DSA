/* Given a M X N matrix with your initial position at top-left cell, find the number of
possible unique paths to reach the bottom right cell of the matrix from the initial position.
Note: Possible moves can be either down or right at any point in time,
i.e, we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].
*/

#include <iostream>
using namespace std;

int matrix(int M, int N){
    if (M == 1 || N == 1 ) return 1;
    return matrix(M-1, N) + matrix(M, N-1);
}

int main(){
    int M, N;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>M>>N;
    cout<<"Number of ways: "<<matrix(M, N)<<endl;
    return 0;
}

