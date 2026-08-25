#include <iostream>
using namespace std;
int main()
{
    // char grade;
    // cout<<"Enter the grade: ";
    // cin>> grade;
    // switch(grade)
    // {
    //     case 'A': cout<<"Your marks is between 90 to 100" <<endl;
    //     break;
    //     case 'B':cout<<"Your marks is between 80 to 90" <<endl;
    //     break;
    //     case 'C':cout<<"Your marks is between 70 to 80" <<endl;
    //     break;
    //     case 'D':cout<<"Your marks is between 60 to 70" <<endl;
    //     break;
    //     case 'E':cout<<"Your marks is between 50 to 60" <<endl;
    //     break;
    //     case 'F':cout<<"Your marks is between 40 to 50" <<endl;
    //     break;
    //     default: cout<<"Invalid input" <<endl;


         
    // }
    int day;
    cout<<"Enter the number of the week: ";
    cin>> day;
    switch(day)
    {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
    }

    
    return 0;
}