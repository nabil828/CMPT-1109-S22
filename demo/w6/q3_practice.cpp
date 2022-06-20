#include <iostream>

using namespace std;


const int maxN = 1e5+10;
int N,A[10];

int  f(int arr[], int size){
     for (int i = 0; i < 5; i++) {
        A[arr[i]]++;
    }
    int ans = 1;
    for (int i=2; i <= 5; i++)
        if (A[i] > A[ans]) ans = i;
    return ans;
}

int main()
{
    // Example 1:
    // arr = [1, 1, 2, 2, 3]
    // There are two each of types 1 and 2, and one sighting of type 3. Pick the lower of the two types seen twice: type 1.
    // Output: 1
    // int arr[5] = {1, 1, 2, 2, 3};
    // cout << f(arr, 5); // should be 1

    // Example 2:
    // arr = [1, 4, 4, 4, 5, 3]
    // There are three sightings of type 4. Hence the answer is 4.
    // Output: 4
    int arr[6] = {1, 4, 4, 4, 5, 3};
    cout << f(arr, 6); // should be 4
}


