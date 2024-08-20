// Sreejita Bhadrdwaj 
// 23070123130
// ENTC B2 
// experiment 8


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
