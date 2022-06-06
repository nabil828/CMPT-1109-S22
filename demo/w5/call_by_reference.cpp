#include <iostream>

using namespace std;

void f1(int &a)
{
    a = a + 1; // 11
}

int main()
{
    // int a = 99;

    // int b = 80;
    // int c = 87;
    const int x = 6;
    int grades[x];
    grades[0] = 99;
    grades[1] = 80;
    // ...
    grades[5] = 87;
    // cout << grades[1];
    for (int i = 0; i < 6; i++)
        cin >> grades[i];
    for (int i = 0; i < 6; i++)
        cout << grades[i] << endl;

    // x = 10;
    return 0;
}