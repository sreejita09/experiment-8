# experiment-8

# Aim:
To study and implement C++ 2D Array - Matrices

# Apparatus:
VS Code 

# Theory:


# Codes:
# matrix display
~~~
#include<iostream>
using namespace std;

int main() {
    int temp[3][3], i, j;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> temp[i][j];
        }
    }
    
    cout << "The 3x3 matrix is: " << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/ea52e8fb-e05a-459d-bf0a-915576300ad6)

# matrix addition
~~~
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

~~~
![image](https://github.com/user-attachments/assets/1a51bd0a-c9f8-453f-9dbe-10827f9ea5ca)
