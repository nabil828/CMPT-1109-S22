#include <iostream>

using namespace std;

void f1(int a){
    a = a + 1; // 11
}

int main (){
    int a = 10;
    f1(a); // call by value

    cout << endl;
    cout << a; // ?

    return 0;
}