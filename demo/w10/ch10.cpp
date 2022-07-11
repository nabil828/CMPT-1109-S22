#include <iostream>

using namespace std;

class Car
{
// private:
    // public: // accessor [private/public/protected]
    int year; // private  data member
    string model; // private  data member
    string make; // private  data member

public:
    // default constructor 
    Car(){
        year = 2022;
        model = "X";
        make = "Nissan1";
    }
     // constructor 
    Car(int a){
        year = a;
        model = "X";
        make = "Nissan2";
    }

    // member function
    void set_year(int year)
    {
        this->year = year;
    }

    // member function
    int get_year()
    {
        return year;
    }
    
    // member function
    string get_make()
    {
        return make;
    }

    

};

void f1(Car & aCar){
    aCar.set_year(2011);
}

int main()
{
    Car x;
    x.set_year(2012);
    f1(x); // call by reference
    cout << x.get_year(); // 2011

    Car *p1;
    p1 = &x;
    // cout << (*p1).get_year();
    cout << p1->get_year(); // 2011

    return -10;
}