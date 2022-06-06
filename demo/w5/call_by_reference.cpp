#include <iostream>

using namespace std;

int lookup(int arr[], int size_, int a)
{
    // stub function!
    for (int i = 0; i < size_; i++)
        if (a == arr[i])
            return i;
}

int main()
{
    const int ARR_SIZE = 8;
    int arr[ARR_SIZE] = {20, 23, 15, 11, 8, 14, -1, 30};
    int target = 11;
    cout << lookup(arr, ARR_SIZE, target);  // 3

    return 0;
}