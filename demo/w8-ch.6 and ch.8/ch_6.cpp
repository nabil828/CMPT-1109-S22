#include <iostream>
#include <fstream>

using namespace std;


int main(){
    int x;
    // cin >> x;
    // cout << "sadasd" << x;


    ifstream   inStream;
    inStream.open("input.txt");
    if(inStream.fail()){
        cout << "something went wrong";
        return -1;
    }
    while( inStream >> x){
            cout << x << endl;
    }

    inStream.close(); // ?
    // cout << x;

    // ofstream outStream;
    // outStream.open("output.txt");
    // outStream << x;


    return -1;
}