// EXPERIMENT 8D : Find the sum of the diagonal elements in a matrix

#include <iostream>

using namespace std;

int main() {
    int row_1 = 3;
    int col_1 = 3;

    int matrix_1[row_1][col_1];
    int diag_sum = 0;

    cout << endl;

    cout << "Enter the values for matrix \n";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix_1[i][j];
        }
    }

     for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix_1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++) {
        diag_sum += matrix_1[i][i];
    }

    cout << "The sum of the diagonal elements is: " << diag_sum << endl;
    
    return 0;
}


/*
OUTPUT : 

Enter the values for matrix 
1  
2
3
4
5
6
7
8
9
1       2       3
4       5       6
7       8       9

The sum of the diagonal elements is: 15
*/
