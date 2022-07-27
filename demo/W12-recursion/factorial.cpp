
#include <iostream>

using namespace std;

int fact(int n)
{ // n!
    if (n == 1 || n == 0)
        return 1; // basic step
    else
        return n * fact(n - 1); // recursive step
}

int main()
{
    cout << fact(0); // 1
    cout << fact(1); // 1
    cout << fact(2); // 2
    cout << fact(3); // 6
    cout << fact(4); // 24

    // 1! = 1
    // 0! = 1
    // 2! = 2
    // 3! = 6
    // 4! = 24

    return 23;
}