// ============================================================
// Armstrong_Number
// ============================================================
//
// Check whether a number is an Armstrong number.
// 1³ + 5³ + 3³
// 1 + 125 + 27
// 153
// // Difficulty : Practice
// Approach    : ______________________________
// Time        : O(__________)
// Space       : O(__________)
// ============================================================

//if digit 5 then power five if 4 then 4 like wise 
#include <iostream>
using namespace std;

int main()
{
    int number;
    int savepoint = 0;
    cout << "Enter the number: " << endl;
    cin >> number;
    int original = number;
    while (number > 0)
    {
        int reminder = number % 10;
        int cube = reminder * reminder * reminder* reminder* reminder;
        savepoint = savepoint + cube;
        number = number / 10;
    }
    // cout<<savepoint<<endl;
    if (original == savepoint)
    {
        cout << "The number is a Armstrong number";
    }
    else
    {
        cout << "The number is not Armstrong number";
    }
    return 0;
}
