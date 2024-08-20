# experiment-8

# Aim:
To study and implement C++ 2D Array - Matrices

# Apparatus:
VS Code 

# Theory
Matrix Display: Display the elements of a matrix in a formatted way. Use nested loops to iterate over rows and columns, printing each element.
Matrix Addition: Add corresponding elements of two matrices to produce a new matrix. Iterate through each element, summing the corresponding elements from both matrices.
Matrix Subtraction: Subtract corresponding elements of one matrix from another. Similar to matrix addition, but subtract the elements 
Matrix Multiplication. Multiply two matrices to produce a new matrix. Use a triple nested loop where each element in the result matrix is the dot product of a row from the first matrix and a column from the second.
Diagonal Addition. Calculate the sum of elements on the principal diagonal of a matrix. Sum elements where the row index equals the column index.
Matrix Transpose. Flip a matrix over its diagonal, swapping rows with columns. Swap elements such that the element at [i][j] in the original matrix moves to [j][i] in the transposed matrix.

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

# difference of matrix 
# code
~~~
int main() 
{
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int matrix1[rows][columns], matrix2[rows][columns], diff[rows][columns];

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
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "Difference of the two matrices:" << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cout << diff[i][j] << " ";
            if (j == columns - 1) {
                cout << endl;
            }
        }
    }

    return 0;
}  
~~~
![image](https://github.com/user-attachments/assets/acf352a2-a5cc-4b67-a5b6-a9b1220cf7b2)

# matrix multiplication
~~~
#include <iostream>
using namespace std;

int main() 
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int m1[r1][c1], m2[r2][c2], result[r1][c2];

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) 
            { 
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Resulting matrix after multiplication:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/494ab569-df84-4063-abf0-280a8059e245)
# transpose 

~~~
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
~~~
![image](https://github.com/user-attachments/assets/81e71813-bb7c-445e-aa4d-84d09047c59d)

# diagonal addition
~~~
#include <iostream>
using namespace std;

int main() 
{
    int mat[4][4] = {{1, 2, 3, 4},  
                     {5, 6, 7, 8},  
                     {1, 2, 3, 4},  
                     {5, 6, 7, 8}};

    int principal = 0;
    
    for (int i = 0; i < 4; ++i) 
        principal += mat[i][i]; 

    cout << "Sum of the diagonal elements is: " << principal << endl;

    return 0;
}

~~~
![image](https://github.com/user-attachments/assets/0d03ab69-e9d6-4b4d-a995-3c169b99e834)
