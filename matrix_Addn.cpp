// Sreejita Bhadrdwaj 
// 23070123130
// ENTC B2 
// experiment 8
#include <iostream>
using namespace std;

int main() 
{
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int matrix1[rows][columns], matrix2[rows][columns], sum[rows][columns];

    cout << "Enter elements of the first matrix:" << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum of the two matrices:" << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cout << sum[i][j] << " ";
            if (j == columns - 1) {
                cout << endl;
            }
        }
    }

    return 0;
}  
