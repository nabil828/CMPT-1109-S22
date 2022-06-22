#include <iostream>

using namespace std;

bool f1(int input_arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = 1; j < size; j++)
            if(input_arr[i] == input_arr[j] && i != j){
                return true;
            }
    }
    return false;
}
int main()
{
    // Example 1:
    // Input: nums = [1,2,3,1]
    // Output: true
    // const int size = 4;
    // int input_arr[size] = {1, 2, 3, 1};
    // cout << f1(input_arr, size);



    // Example 2:
    // Input: nums = [1,2,3,4]
    // Output: false
    // const int size2 = 4;
    // int input_arr2[size2] = {1, 2, 3, 4};
    // cout << f1(input_arr2, size2);

    // Example 3:
    // Input: nums = [1,1,1,3,3,4,3,2,4,2]
    // Output: true
    const int size3 = 10;
    int input_arr3[size3] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << f1(input_arr3, size3);

    return -11;
}