// ============================================================
// Char_Case
// ============================================================
//
// Check whether a character is uppercase or lowercase.
//
// Difficulty : Practice
// Approach    : ______________________________
// Time        : O(__________)
// Space       : O(__________)
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    if ('A' <= ch && ch <= 'Z')
    {
        cout << "UPPERCASE" << endl;
    }
    else if ('a' <= ch && ch <= 'z')
    {
        cout << "LOWERCASE" << endl;
    }
    else
    {
        cout << "Enter an Invalid input";
    }

    return 0;
}
