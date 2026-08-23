#include <iostream>
using namespace std;

// ****
// ****
// ****
// ****


// void pattern (int n )
// {
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<n;j++)
//         {
//             cout<<"*";
//         }
//     cout<<endl;
//     }

// }
// void pattern (int n )
// {
//     for (int i =0; i< n; i++)
//     {
//         for (int j =1; j <= i; j++)
//         {
//             cout<< "*";
//         }
//     cout<<endl;
//     }
// }
// void pattern (int n )
// {
//     for (int i =0; i< n; i++)
//     {
//         for (int j =1; j <= i; j++)
//         {
//             cout<< j;
//         }
//     cout<<endl;
//     }
// }

// void pattern (int n )
// {
//     for (int i =0; i< n; i++)
//     {
//         for (int j =1; j <= i; j++)
//         {
//             cout<< i;
//         }
//     cout<<endl;
//     }
// }

void pattern (int n )
{
    for (int i =0; i< n; i++)
    {
        for (int j =1; j <= n; j++)
        {
           
            cout<< i;
        }
    cout<<endl;
    }
}
int main()
{
    int n ;
    cin >>n;
    pattern(n);
}