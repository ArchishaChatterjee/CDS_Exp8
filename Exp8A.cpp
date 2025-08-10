//EXPERIMENT 8A : Taking input from user to create a matrix 

#include <iostream>
using namespace std;


int main() {
    int M1[10][10];
    for (int i=0 ; i<3 ; i++){
        for (int j=0; j<3; j++){
            cin >> M1[i][j];
        }
    }
    cout << endl;

    for (int i=0; i<3; i++){
        for (int j=0;j<3; j++){
            cout << M1[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}


/*
OUTPUT : 
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
*/
