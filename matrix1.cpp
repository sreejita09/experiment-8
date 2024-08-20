// Sreejita Bhadrdwaj 
// 23070123130
// ENTC B2 
// experiment 8

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
