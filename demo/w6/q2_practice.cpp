#include <iostream>

using namespace std;


int searchInsert(int  nums [], int size ,  int target) {
        int i; int  n = size;
        if(target<=nums[0]){
            return 0;
        }
        for(i=1;i < n;i++){
            if(target==nums[i-1]){
                return i-1;
            }
            if(target>nums[i-1]&&target<nums[i]){
                return i;
            }
            
        }
        if(target==nums[n-1]){
            return n-1;
        }
       return i;
    }

int main (){
    int nums [4] = {1,3,5,6};
    int size = 4;
    int target = 2;
    cout << searchInsert(nums, size, target) << endl; // should be 1 


    int nums2 [4]= {1,3,5,6};
    size = 4;
    target = 7;
    cout << searchInsert(nums2, size, target) << endl;  // should be 4


    
    int nums3 [4]= {1,3,5,6};
    size = 4;
    target = 5;
    cout << searchInsert(nums3, size, target) << endl; // should be 2  

    return 0;
}