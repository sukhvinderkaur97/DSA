/* 
A parking lot in a mall has RxC number of parking spaces. Each parking space will either be  empty(0) or full(1). 
The status (0/1) of a parking space is represented as the element of the matrix. 
The task is to find index of the prpeinzta row(R) in the parking lot that has the most of the parking spaces full(1).
Note :
RxC- Size of the matrix
Elements of the matrix M should be only 0 or 1.
Example:
Input :
3   -> Value of R(row)
3    -> value of C(column)
[0 1 0 1 1 0 1 1 1] -> Elements of the array M[R][C] where each element is separated by new line.
Output :
3  -> Row 3 has maximum number of 1’s
*/

#include <iostream>
using namespace std;

int main() {
    int R, C;
    cout << "Enter the number of rows: ";
    cin >> R;
    cout << "Enter the number of columns: ";
    cin >> C;
    int M[R][C];
    cout << "Enter the elements of matrix: ";

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> M[i][j];
        }
    }
    
    int maxOnes = 0, maxRow = 0;

    for (int i = 0; i < R; i++) {
        int count = 0;
        for (int j = 0; j < C; j++) {
            if (M[i][j] == 1) {
                count++;
            }
        }
        if (count > maxOnes) {
            maxOnes = count;
            maxRow = i + 1;
        }
    }
    
    cout << "Row with most of the parking spaces full: " << maxRow << endl;
    return 0;
}
