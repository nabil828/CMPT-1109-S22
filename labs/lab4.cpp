#include <iostream>

using namespace std;

bool is_leap(int a_year)
{
    if (a_year % 4 == 0)
    {
        if (a_year % 100 == 0)
        {
            if (a_year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

// input 1-12
// output either 30,31
int number_of_days_in_a_month(int a_month)
{
    if (a_month == 1 || a_month == 3 || a_month == 5 || a_month == 7 || a_month == 8 || a_month == 10 || a_month == 12)
        return 31;
    else
        return 30;
}

int main()
{
    // cout << is_leap(1991); // 0
    // cout << is_leap(2004); // 1
    // cout << is_leap(2000); // 1
    // cout << is_leap(2200); // 0
    const int WEEKS = 5;
    const int DAYS_PER_WEEKS = 7;
    int arr[WEEKS][DAYS_PER_WEEKS];
    int day_of_month = 1;

    // jan of 2004 and starting from Sun
    number_of_days_in_a_month(1); // 31
    for (int i = 0; i < WEEKS; i++)
    {
        for (int j = 0; j < DAYS_PER_WEEKS && day_of_month <= number_of_days_in_a_month(1); j++)
        {
            arr[i][j] = day_of_month;
            day_of_month = day_of_month + 1;
        }
    }

    int counter = 1; 
    for (int i = 0; i < WEEKS; i++)
    {
        for (int j = 0; j < DAYS_PER_WEEKS && counter <= number_of_days_in_a_month(1); j++)
        {
            cout << arr[i][j] << " ";
            counter ++;
        }
        cout << endl;
    }

    return 0;
}