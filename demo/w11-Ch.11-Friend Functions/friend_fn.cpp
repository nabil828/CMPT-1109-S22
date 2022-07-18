#include <iostream>

using namespace std;
class AmazonItem{
    string name;
    float price;
    void operator+(int add_to_price);
};

// obj + 1; 

class Rect{
    friend double area(Rect x);
    int width; // private
    int height;
    // public
    public: 
    Rect(int a, int b){
        width =a; height = b;
    }
    // int get_width(){
    //     return width;
    // }
    
    // int get_height(){
    //     return this->height;
    // }
    int operator+(int a ){
        width = width +a;
        return width; 
    }

    double operator+(Rect a ){
        return (width * height) + (a.height * a.width) ;
    }
};

double area(Rect x){
    // return x.get_width() * x.get_height();
    return x.width * x.height;
}

int main (){
    Rect a_rectagnle(2, 4);
    // cout << area(a_rectagnle); // 8
    // cout << a_rectagnle + 1; // width = 3 ( 2 + 1 )
    // cout << a_rectagnle.operator+(1); // width = 4 ( 3 + 1 )

    Rect another_rectagnle(3, 5);
    cout << a_rectagnle + another_rectagnle; // adding the areas 16 + 15 = 31

    // r1.add(r2); // r1 + r2
    return -99;
}