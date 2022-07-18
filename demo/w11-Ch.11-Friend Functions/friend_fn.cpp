#include <iostream>

using namespace std;

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
};

double area(Rect x){
    // return x.get_width() * x.get_height();
    return x.width * x.height;
}

int main (){
    Rect a_rectagnle(2, 4);
    cout << area(a_rectagnle); // 8

    return -99;
}