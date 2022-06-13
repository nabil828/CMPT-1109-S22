#include <iostream>

using namespace std;

int main()
{
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == 4)
                break;
            cout << i << endl;
            // cout << "go to next iteration .  " << endl;
        }
        // break;
    }

    return 0;
}