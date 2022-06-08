#include <iostream>

using namespace std;

bool is_leap(int a_year){
    if(a_year % 4 == 0){
        if(a_year % 100 == 0){
            if(a_year % 400 == 0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
    
}

int main (){
    // cout << is_leap(1991); // 0 
    // cout << is_leap(2004); // 1
    // cout << is_leap(2000); // 1
    cout << is_leap(2200); // 0
    

    return 0;
}