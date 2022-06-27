#include <iostream>

#include <fstream>

using namespace std;

int main (){
    char x;
    char y;


    ifstream inStream;
    inStream.open("input.txt");
    inStream >> x;
    // inStream.get(y);
    inStream.ignore();
    inStream.get(y);
    
 
    cout << x <<endl;
    cout << y <<endl;
    return 666;
}