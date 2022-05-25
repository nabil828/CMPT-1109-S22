#include <iostream>
#include <math.h>

using namespace std;

int main() {


    // start writing your code here ..
    int a;
    int b;
    int c;
    int d;
    double x1, x2;
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Not quadratic \n";
        if (b == 0) {
            cout << "a = 0 \n";
            cout << "b = 0\n";
            cout << "Bye!\n";
        }
        else {    
            x1 = -c / b;

            cout << "x1 = " << x1 << endl;
        }
    }
    else {
        d = b * b - 4 * a * c;

        if (d < 0) {
            cout << "No real roots";
        }else{
            x1 = (-1 * b + sqrt(d)) / (2 * a);

            x2 = (-1 * b - sqrt(d)) / (2 * a);

            cout << "x1 " << x1 << endl;
            cout << "x2 " << x2 << endl;
        }
    }

}