#include <iostream>
using namespace std;

// count the total number in the collection
//  int count(int n ){
//      int cnt =0;
//      while (n>0)
//      {
//          int last =n%10;
//          cnt = cnt +1;
//          n=n/10;
//      }
//      return cnt;
//  }
//  int main()
//  {
//      cout<<count(17432);
//      return 0;
//  }

// int count(int n ){
//     // int cnt =0;
//     while (n>0)
//     {
//         int last =n%10;
//         // cnt = cnt +1;
//         // n=n/10;
//     }

// }
// int main()
// {
//     cout<<count(17432);
//     return 0;

// }

// int reverseofanumber(int n )
// {
//     int lastnumber=0;
//     while(n>0)
//     {
//         lastnumber=n%10;

//     }
// }
// int main()
// {
//     int n=0;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int reverse=0;
//     while (n>0)
//     {
//         int lastnumber = n%10;
//         reverse=(reverse*10)+lastnumber;
//         n=n/10;

//     }
//     cout<<"the reverse is: "<<reverse;
//     return 0;
// }

// void pallendron(int n)
// {
//     int reverse = 0;
//     int day = n;
//     while (n > 0)
//     {
//         int lastnumber = n % 10;
//         reverse = (reverse * 10) + lastnumber;
//         n = n / 10;
//         n == day;
//     }

//     if (day == reverse)
//     {
//         cout << "The number is pallendrom: ";
//     }
//     else
//     {
//         cout << "Not a pallendrom";
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pallendron(n);
// }


// int main()
// {
//     int n;
//     cin>>n;
//     int sum =0;
//     int original=n;
//     while (n>0)
//     {
//         int lastnumber =n%10;
//         sum = (lastnumber*lastnumber*lastnumber)+sum;
//         n=n/10;
//     }
//     if(sum==original)
//     {
//         cout<<"Armstrong";
//     }
//     else{
//         cout<<"Not armstrong";
//     }
    
//     return 0;
// }

// diviso
// int main ()
// {
//     int n;
//     cin>>n;
    
//     for (int i=0;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//         }
        
//     }
//     // o(n**n) 
// }


// int main()
// {
//     int n;
//     // int count=0;
//     cin>>n;
//     int count=0;
//     for(int i=1; i<=n/i;i++)
//     {
//         if(n%i==0 )
//         {
//             count++;
//             if((n/i) !=i)count++;

            
            
//         }
        
//     }
//     if(count==2)
//     cout<<"true";
//     else cout<<"False";
//     return 0;
// }

//gcd or hcf
int main ()
{
    int n,m;
    
    cin>>n;
    cin>>m;
    int gcd=0;
    
    
    
    for (int i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
            gcd=i;
        }
        
    }
    cout<<gcd;
    return 0;
}