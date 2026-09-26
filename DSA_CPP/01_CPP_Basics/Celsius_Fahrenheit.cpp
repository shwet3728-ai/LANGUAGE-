// ============================================================
// Celsius_Fahrenheit
// ============================================================
//
// Convert Celsius temperature to Fahrenheit.
//
// Difficulty : Practice
// Approach    : ______________________________
// Time        : O(__________)
// Space       : O(__________)
// ============================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float Celsius;
    cout<<"Enter the temperature in Celsius"<<endl;
    cin>>Celsius;
    float temp=Celsius*9/5;
    float Fahrenheit = temp + 32;
    cout<<Fahrenheit<<"°F";

    return 0;
}
