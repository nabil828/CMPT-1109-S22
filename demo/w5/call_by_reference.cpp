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
    grades[1] = 50;
    grades[2] = 60;
    grades[3] = 40;
    grades[4] = 20;
    grades[5] = 87;
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        sum += grades[i];
        if (grades[i] > max)
            max = grades[i];

        if (grades[i] < min)
            min = grades[i];
    }

    cout << sum << endl;
    cout << min << endl;
    cout << max << endl;
    return 0;
}