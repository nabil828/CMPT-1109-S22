#include <iostream>
#include <math.h> 

using namespace std;
int x = 4;

void f1(){
    int x = 5;
    cout << x<<endl;
}

void f2(); // function decleration

int main () {
    {
        x = 10;
    }
    cout << x<<endl; // 10
    int x = 6;
    cout << x<<endl; // 6
  
    f1(); //5
    f2();
    
    return 0;
}

void f2(){
    x = 623;
    cout<<x;
}