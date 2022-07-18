#include <iostream>
#include <string.h>

using namespace std;
class AmazonItem{
    public:
    char *name;
    float price;

};


int main (){
    AmazonItem item1;
    item1.name = "iPhone 6";

    AmazonItem item2;
    item2 = item1;
    cout<< item2.name; // should be iphone 6
    
    // item2.name = 
    strcpy( item2.name, "asdasd");
    cout << item1.name; // should be iphone 6s
    return -99;
}