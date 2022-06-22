#include <iostream>

using namespace std;


int f(int target ){
    // starting from from 1

    int solution = 1;
    while (solution * solution <= target){
        solution++;
    }
    return solution -1;
}

int main (){
    int target = 4; // output should be 2
    cout << f(target) << endl;

    target = 8; // output should be 2
    cout << f(target);
    return 0;
}