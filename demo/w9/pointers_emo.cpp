#include <iostream>
using namespace std;

int main (){

    // int arr [3];
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // // cout << arr;
    // int *p = arr;
    // cout << *(p+2);

    // for(int i = 0  ;i < 3; i++)
    //     cout << arr[i];// cout << *(arr+i); //cout << p[i]; // cout << *(p+i);

    // Dynamic Arrays
    int x;
    cin >> x;
    int *p = new int [x];
    cin >> p[0];
    cin >> *(p+1);

    cout << p[1];

    return -9923;
}