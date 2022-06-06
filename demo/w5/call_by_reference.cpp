#include <iostream>

using namespace std;



int main()
{

    const int x = 6;
    int grades[x];
    grades[0] = 99;
    grades[1] = 50;
    grades[2] = 60;
    grades[3] = 40;
    grades[4] = 20;
    grades[5] = 87;

    // cout << sum_(grades) << endl;
    // cout << min_(grades) << endl;
    // cout << max_(grades) << endl;
    // f1(grades);
    cout << grades[0]; // 99  or 100 ? call-by-reference
    return 0;
}