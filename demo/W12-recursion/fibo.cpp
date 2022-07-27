#include <iostream>

using namespace std;

int fib(const int n)
{
    // if (n == 0 || n == 1)
    //     return n;
    // else
    //     return fib(n - 1) + fib(n - 2);
    
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n ; i++){
        arr [i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
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