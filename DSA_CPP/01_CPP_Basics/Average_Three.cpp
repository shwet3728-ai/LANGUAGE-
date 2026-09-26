// ============================================================
// Average_Three
// ============================================================
//
// Take marks of three subjects and calculate the average.
//
// Difficulty : Practice
// Approach    : ______________________________
// Time        : O(1)
// Space       : O(1)
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float maths,physics,chemistry;
    cout<<"Enter the number:"<<endl;
    cin>>maths;
    cin>>physics;
    cin>>chemistry;
    float avg=(maths+physics+chemistry)/3;
    cout<<"The average marks of the three subject is :"<<fixed<<setprecision(1)<<avg;


    return 0;
}
