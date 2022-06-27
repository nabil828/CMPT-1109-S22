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
    char arr[20];
    int i = 0;
    while(!inStream.eof()){
        inStream.get(arr[i]);
        i = i +1;
    }
    cout <<x<<endl<<y;
    return 666;
}