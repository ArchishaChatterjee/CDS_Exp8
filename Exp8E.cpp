// EXPERIMENT 8E : Finding the Transpose of a Matrix

#include <iostream>

using namespace std;

int main() {
    int row_1 = 3, col_1 = 3;
    int matrix_1[3][3];
    int transpose_matrix[3][3];

    cout << "Enter the values for matrix 1\n";

    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_1; j++) {
            cin >> matrix_1[i][j];
        }
        
    }

    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_1; j++) {
            transpose_matrix[j][i] = matrix_1[i][j];
        }
    }

    cout << "The transpose of matrix 1:\n";
    for(int i = 0; i < col_1; i++) {
        for(int j = 0; j < row_1; j++) {
            cout << transpose_matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}



/*
OUTPUT : 
Enter the values for matrix 1
1
2
3
4
5
6
7
8
9
The transpose of matrix 1:
1       4       7
2       5       8
3       6       9

*/
