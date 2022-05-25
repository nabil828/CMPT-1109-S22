#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a grade letter\n";

    char x;
    cin >> x;
    switch (x)
    {
        case 'A':
            cout << "Excellent!\n";
            // break;
        case 'B':
            cout << "Very Good!\n";
            // break;
        case 'D':
            cout << "Not Good!\n";
            // break;
        case 'E':
            cout << "This is not a possible grade!\n";
            // break;
        default:
            cout << "Not A, B, D, or E input!";
    }
    // if(x == 'A')
    //     cout << "Excellent!\n";
    // else {
    //     if(x == 'B')
    //         cout << "Very Good\n";
    //     else {
    //         if(x  == 'D')
    //             cout << "Not Good!\n";
    //         else {
    //             if (x == 'E')
    //                 cout << " This is not a possible grade!\n";
    //         }
    //     }
    // }

    return 0;
}