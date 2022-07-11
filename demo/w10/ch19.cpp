#include <iostream>

using namespace std;

class Car
{
// public: // accessor [private/public/protected]
    int year; // data member
    string model;
    string make;

    // void f2();// member function
};

void f1(Car a){
    cout <<a.make;
    // a.year = 2022;
    // // return a;
}

int main()
{
    Car x;
    x.make = "Ford";
    x.year = 2012;
    x.model = "Explorer";

    Car y;
    y.make = "Honda";
    y.year = 2015;
    y.model = "Civiv";

    // x.model = y.model;
    Car arr[2];
    arr[0].make = "BMW";
    arr[1].make = "Toyota";
    
    // f1(arr[0]); // BMW

    Car *p1;
    p1 = &y;
    (*p1).year = 2016;
    cout << y.year; // 2016

    return -10;
}