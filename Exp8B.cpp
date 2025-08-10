// EXPERIMENT 8B : Finding the Sum of 2 Matrices

#include <iostream>
using namespace std;


int main() {
    int M1[10][10];
    cout << "Enter for Matrix 1 : " << endl;
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
    //////////////////////////////////////


    int M2[10][10];
    cout << "Enter for Matrix 2 : " << endl;
    for (int i=0 ; i<3 ; i++){
        for (int j=0; j<3; j++){
            cin >> M2[i][j];
        }
    }
    cout << endl;
    
    for (int i=0; i<3; i++){
        for (int j=0;j<3; j++){
            cout << M2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
  int i,j;
cout << bool (M1[i] == M2[i] && M1[j] == M2[j]) << endl;

    ///////////////////////////////////
  
    int Madd[10][10];
    cout << "The Sum of Matrix 1 and 2 are : " << endl;
    for (int i=0; i<3; i++){
        for (int j=0;j<3; j++){
            Madd[i][j] = M1[i][j] + M2[i][j];
            cout << Madd[i][j] << "\t";
        }
        cout << endl;

    } 
    return 0;
}









/*
OUTPUT : 

Enter for Matrix 1 : 
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
Enter for Matrix 2 : 
9
8
7
6
5
4
3
2
1

9       8       7
6       5       4
3       2       1

0
The Sum of Matrix 1 and 2 are : 
10      10      10
10      10      10
10      10      10
