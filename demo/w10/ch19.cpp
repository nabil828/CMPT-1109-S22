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

    cout << y.get_year(); // 2015

    return -10;
}