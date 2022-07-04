#include <iostream>
using namespace std;

int main (){
    int x = 5;
    int *p;
    p = &x;

    // cout << *p; // 5

    int **p2;
    p2 = & p;

    cout << **p2;

    return -9923;
}