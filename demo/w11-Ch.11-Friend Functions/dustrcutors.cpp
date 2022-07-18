#include <iostream>

using namespace std;

class C1{
    int *p1;
    public:
    C1(){
        cout << "This is the constructor of C1"<< endl;
        p1 = new int;
        *p1 = 5;
    }
    ~C1(){
        cout << "This is the Destructor of C1"<< endl;
        delete p1;
    }

};


class C2  : public C1
{
    public:
    C2(){
        cout << "This is the constructor of C2"<< endl;
    }
    
    ~C2(){
        cout << "This is the Destructor of C2"<< endl;
    }

};
int main(){

    C1 obj1; 
    {
        C2 obj2;
    }

    return -1;
}