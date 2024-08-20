// Sreejita Bhadrdwaj 
// 23070123130
// ENTC B2 
// experiment 8


#include <iostream>
using namespace std;

int main() {
    int r, c ;
    cout << "Enter the number of rows of the matrix: ";
    cin >> r;
    cout << "Enter the number of columns of the matrix: ";
    cin>>c;
    int m[r][c], transpose[c][r];
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m[i][j];
        }
    }
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            transpose[j][i] = m[i][j];
        }
    }
    cout << "\nTranspose of the matrix:" << endl;
    for(int i = 0; i < c; ++i) {
        for(int j = 0; j < r; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}