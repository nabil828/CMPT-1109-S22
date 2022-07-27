
#include <iostream>

using namespace std;

int fact(int n){ // n!
    int result = 1;
    for (int  i = 1; i <= n; i++){
        result *= i;
    }
    return result;
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