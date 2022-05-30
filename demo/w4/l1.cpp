#include <iostream>

using namespace std;

void f2 (){
    cout << "f1() got executed!";
}

int main () {

    cout << "start executing this file from this function - main!\n";
    cout << f2();
    // cout << endl << pow_(2, 3) << endl; // 2 * 2 * 2 = 8
    //  cout << pow_(2, 4); // 2 * 2 * 2 * 2 = 16
    return 0;
}