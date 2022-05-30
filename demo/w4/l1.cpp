#include <iostream>
#include <math.h>
using namespace std;
void linear_equation_solution(int b)
{
    double x1;
    if (b == 0)
    {
        cout << "a = 0 \n";
        cout << "b = 0\n";
        cout << "Bye!\n";
    }
    else
    {
        x1 = -c / b;

        cout << "x1 = " << x1 << endl;
    }
}

void quadratic_equation_solution (int d, int b, int a){
    double x1, x2;
    if (d < 0)
            {
                cout << "No real roots";
            }
            else
            {
                x1 = (-1 * b + sqrt(d)) / (2 * a);

                x2 = (-1 * b - sqrt(d)) / (2 * a);

                cout << "x1 " << x1 << endl;
                cout << "x2 " << x2 << endl;
            }
}

int main()
{
    int x;

    do
    {

        int a;
        int b;
        int c;
        int d;
        // double x1,
        double x2;

        cout << " a >> b >> c" << endl;

        cin >> a >> b >> c;
        if (a == 0)
        { 
            // linear equation
            cout << "Not quadratic \n";
            linear_equation_solution(b);
        }
        else
        {
            // quadratic equation
            d = b * b - 4 * a * c;
            quadratic_equation_solution(d, b, a);
            
        }

        cout << "Please enter your choice" << endl;
        cout << "1 - To solve a quadratic equations" << endl;
        cout << " Anything else to exit" << endl;
        cin >> x;
    } while (x == 1);

    cout << "Bye!" << endl;
    return 0;
}