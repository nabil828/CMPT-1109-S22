#include <iostream>

using namespace std;
class User{
    public:
    string name;
    string DoB;
};

class Student: public User{
    public:
    int GPA;
};

class Employee: public User{
    public:
    string SIN;
};

int main()
{
    Employee x;
    x.name = "Nabil";
    x.SIN = "1212355";
    Student y;
    y.name = "Aim";
    y.GPA = 100;
    
    return -10;
}