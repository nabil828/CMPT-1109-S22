#include <iostream>

using namespace std;
void f1 (){
    cout << "f1() got executed!";
}
int pow_(int a, int b){
    int result = 1;
    for(int i = 1 ; i <= b ; i++ )
        result = result * a;
    return result;
}
int main () {

    cout << "start executing this file from this function - main!\n";
    f1();
    cout << endl << pow_(2, 3) << endl; // 2 * 2 * 2 = 8
     cout << pow_(2, 4); // 2 * 2 * 2 * 2 = 16
    return 0;
}