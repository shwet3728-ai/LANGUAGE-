// ============================================================
// Absolute_Value
// ============================================================
//
// Find the absolute value of a number without using abs().
//
// Difficulty : Practice
// Approach    : ______________________________
// Time        : O(1)
// Space       : O(1)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int value;
    cout<<"Enter the value"<<endl;
    cin>>value;
    if(value <=0){
        cout<<value+(-value+(-value));
    }
    else if (value >=0){
        cout<<value;
    }
    else if (value ==0){
        cout<<value;
    }


    return 0;
}
