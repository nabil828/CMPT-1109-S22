#include <iostream>

using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << fib(0);// = 0;
    cout << fib(1);// = 1;
    cout << fib(2);;// = 1;
    cout << fib(3) ;//= 2;
    cout << fib(4) ;//= 3;
    cout << fib(9) ;//= 34;
    return -1;
}