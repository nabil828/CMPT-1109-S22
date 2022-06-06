#include <iostream>

using namespace std;

int sum_(int arr[]){
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int min_(int arr[]){
    int min = INT_MAX;
    
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}


int max_(int arr[]){
    int max = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

void f1(int arr[]){
    arr[0] = 100;
}
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
    f1(grades);
    cout << grades[0]; // 99  or 100 ? call-by-reference 
    return 0;
}