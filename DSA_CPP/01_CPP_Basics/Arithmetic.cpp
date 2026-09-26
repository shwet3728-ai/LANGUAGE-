// ============================================================
// Arithmetic
// ============================================================
//
// Take two numbers and print their sum, difference, product and quotient.
//
// Difficulty : Practice
// Approach    : ______________________________
// Time        : O(1)
// Space       : O(1)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    float first_number , second_number;
    cout<<"Enter the numbers: "<<endl;
    cin>>first_number;
    cin>>second_number;
    float sum = first_number+second_number;
    float difference = first_number-second_number;
    float product = first_number*second_number;
    float quotient = first_number/second_number;
    // float quotient = first_number % second_number;
    cout<<sum<<endl;
    cout<<difference<<endl;
    cout<<product<<endl;
    cout<<quotient<<endl;
    return 0;
}
