#include <iostream>

using namespace std;

class C1
{

public:
    int *p1;
    C1()
    {
        cout << "This is the constructor of C1" << endl;
        p1 = new int;
        *p1 = 5;
    }
    ~C1() // 1st Member of the Big Three
    {
        cout << "This is the Destructor of C1" << endl;
        delete p1;
    }
    C1(C1 &y) // copy constructor  // 3rd Member of the Big Three
    {
        p1 = new int;
        *p1 = *(y.p1); // deep copy
    }
    void operator=(C1 x) // Operator = Obverloading // 2nd Member of the Big Three
    {
        *p1 = *(x.p1); // deep copy
    }
};

int main()
{

    C1 obj1; // 5

    C1 obj2; // 5

    obj2 = obj1; // deep copy // obj2.operator=(obj1)

    // C1 obj3(obj2);
    *(obj2.p1) = 10;

    cout << *(obj1.p1); // expecting 5 but I think we will get the 10. Now I will get the 5

    return -1;
}