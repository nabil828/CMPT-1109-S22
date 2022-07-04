#include <iostream>
using namespace std;

int main (){
    int x = 5;
    int *p1;
    int *p2;
    
    // p1 = x; // illegall
    
    p1 = &x;
    p2 = p1; // legal
    // cout << x << *p1 << *p2;
    cout << &p1 << " " << &p2;
    // p2 = &p1; // illegal


    &p1 = x;
    return -9923;
}