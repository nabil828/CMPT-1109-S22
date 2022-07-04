#include <iostream>
using namespace std;

int main (){
    // int arr[3][2]
    int **p = new int *[3];
    p[0] = new int [2]; // int *x = new int [2];
    *(p+1) = new int [2]; // int *y = new int [2];
    *(p+2) = new int [2]; // int *z = new int [2];
    cin >> p[0][0];
    cin >> p[2][1]; // row 3, column 2

    delete p[0];
    delete p[1];
    delete p[2];
    delete p; 
    

    return -9923;
}