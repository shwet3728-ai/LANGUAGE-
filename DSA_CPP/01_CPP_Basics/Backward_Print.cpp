// ============================================================
// Backward_Print
// ============================================================
//
// Print numbers from N to 1.
//
// Difficulty : Practice
// Approach    : ______________________________
// Time        : O(n)
// Space       : O(1)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number:"<<endl;
    cin >>num;
    while (num>0){
        cout<<num;
        num--;
    }


    return 0;
}
