#include <iostream>

#include <fstream>

using namespace std;

int main (){
    char x, y;
    // cin.get(x);
    // cin.get(y);

    ifstream inStream;
    inStream.open("input.txt");
    // inStream.get(x);
    // inStream.get(y);
    while(!inStream.eof()){
        inStream.get(x);
        cout << x;
    }
    cout <<x<<endl<<y;
    return 666;
}