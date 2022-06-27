#include <iostream>
#include <fstream>

using namespace std;


int main(){
    int x;
    // cin >> x;
    // cout << "sadasd" << x;


    ifstream   inStream;
    inStream.open("input.txt");
    inStream >> x;
    // cout << x;

    ofstream outStream;
    outStream.open("output.txt");
    outStream << x;


    return -1;
}