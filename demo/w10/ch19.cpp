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
    void set_year(int a)
    {
        year = a;
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

int main()
{
    Car x;
    // x.make = "Ford";
    // x.year = 2012;
    x.set_year(2012);
    // x.model = "Explorer";

    Car y;
    // y.make = "Honda";
    // y.year = 2015;
    y.set_year(2015);
    // y.model = "Civiv";

    // cout << y.get_year(); // 2015

    Car z; // default constuctor will be called
    cout << z.get_make() << endl; // Nissan1


    Car w(2017); // 2nd constuctor will be called
    cout << w.get_make() << endl; // Nissan2
    cout << w.get_year() << endl; // 2017



    
    return -10;
}