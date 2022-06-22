#include <iostream>

using namespace std;

int main (){

    // Example 1:
    // Input: nums = [3,2,1]
    // Output: 1
    // Explanation:
    // The first distinct maximum is 3.
    // The second distinct maximum is 2.
    // The third distinct maximum is 1.
    // const int size1 = 3;
    // int arr [size1] = {3, 2 , 1};



    // Example 2:
    // Input: nums = [1,2]
    // Output: 2
    // Explanation:
    // The first distinct maximum is 2.
    // The second distinct maximum is 1.
    // The third distinct maximum does not exist, so the maximum (2) is returned instead.

    // const int size1 = 2;
    // int arr [size1] = {1, 2};

        // Example 3:
    // Input: nums = [2,2,3,1]
    // Output: 1
    // Explanation:
    // The first distinct maximum is 3.
    // The second distinct maximum is 2 (both 2's are counted together since they have the same value).
    // The third distinct maximum is 1.

    
    const int size1 = 4;
    int arr [size1] = {2, 2, 3, 1};




    int max1 = INT_MIN;
    for (int i = 0 ; i < size1; i++){
        if(arr[i] > max1){
            max1 = arr[i];
        }
    }


    int max2 = INT_MIN;
    for (int i = 0 ; i < size1; i++){
        if(arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }
    }

    
    int max3 = INT_MIN;
    for (int i = 0 ; i < size1; i++){
        if(arr[i] > max3 && arr[i] < max2){
            max3 = arr[i];
        }
    }

    cout << max1 << endl ;
    if(max2 == INT_MIN)
        cout << "The 2nd distinct maximum does not exist, so the maximum (1) is returned instead.";
    else
        cout << max2 << endl;

    if(max3 == INT_MIN)
        cout << "The third distinct maximum does not exist, so the maximum (2) is returned instead.";
    else
        cout << max3 << endl;

    


    return 0;
}