#include <iostream>
#include <string>
using namespace std;


int main (){
    // char x;
    // cin >> x;
    // cin.get(x);

    string x;
    // cin >> x; // not good if I want to read a whole line
    getline(cin, x);
    cout << x;
    return -123;
}