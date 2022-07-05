#include <iostream>
#include <vector>
using namespace std;


int main (){
    vector<int> arr;
    arr.push_back(56);
    arr[0] = 57;
    arr.at(0) =667;
    cout << arr.at(0) ;
    // arr.pop_back();
    cout <<arr.size();
    // cout << arr[0];


    return -123;
}