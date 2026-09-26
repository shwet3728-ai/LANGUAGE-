// ============================================================
// Char_Classify
// ============================================================
//
// Check whether a character is alphabet, digit or special character.
//
// Difficulty : Practice
// Approach    : ______________________________
// Time        : O(__________)
// Space       : O(__________)
// ============================================================

#include <iostream>
using namespace std;

int main()
{

    char alpha;
    cout << "Enter the input" << endl;

    cin >> alpha;
    if ('A' <= alpha && alpha <= 'Z')
    {
        cout << "Its a alphabet in uppercase" << endl;
    }
    else if ('a' <= alpha && alpha <= 'z')
    {
        cout << "Its a alphabet in lower case" << endl;
    }
    else if ('0' <= alpha && alpha <= '9')
    {
        cout << "Its a number" << endl;
    }

    else
    {
        cout << "Its a special character" << endl;
    }

    return 0;
}
