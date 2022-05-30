#include <iostream>
using namespace std;
int x =4;


void f1(int a, int b){
    cout  << "f1(int a, int b) got called!\n"; 
}


void f1(){
    cout  << "f1() got called!\n"; 
}

void f1(int a){
    cout  << "f1(int a) got called!\n"; 
}

int main () {
    f1();
    f1(4);
    f1(4, 5);
    return 0;
}