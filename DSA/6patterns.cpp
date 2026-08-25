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

// *
// **
// ***
// ****
// *****
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

// 1
// 12
// 123
// 1234
// 12345

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


// 1
// 22
// 333
// 4444
// 55555
// void pattern (int n )
// {
//     for(int i =0;i < n;i++)
//     {
//         for (int j =1;j<=i;j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


// *****
// ****
// ***
// **
// *
// void pattern (int n )
// {
//     for(int i =1;i <= n;i++)
//     {
//         // for (int j =5;j>=i;j--)
//         for (int j =0;j<n-i+1;j++)
    
//     {
//         cout<<"*";
//     }
//     cout<<endl;
    
//     }
    
// }

// 12345
// 1234
// 123
// 12
// 1
// void pattern (int n )
// {
//     for (int i=1;i<=n;i++)
//     {
//         for (int j =1;j<=n-i+1;j++)
//         {
//         cout<<j;
//     }
        
//     cout<<endl;
//     }
    
    
// }

void pattern (int n )
{
    for (int i=0;i<n;i++)
    {
        // space
        for (int j = 0; j<n-i+1;j++)
        {
            cout<<" " ;
        }
        // star
        for (int j =0; j< 2*i+1;j++)
        {
            cout<<"*";
        }
        // space
        for (int j =0;j<n-i+1;j++){
            cout<<" ";
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




