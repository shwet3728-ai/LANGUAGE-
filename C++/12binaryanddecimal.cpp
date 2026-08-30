#include <iostream>
using namespace std;

// decimal to binary 
// division method
// int onedecimal (int n ){
//     int binary1 =0;
//     int i=0;
//     while (n>0){
//         int bit = n%2;
//         binary1 = bit*pow(10,i++) + binary1;
//         cout<<bit<<endl;
//         n /=2;
//     }
//     return binary1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int binary = onedecimal(n);
//     cout<<binary<<endl;
    
// }

// Bitwise method
// int onedecimal (int n ){
//     int binary1 =0;
//     int i=0;
//     while (n>0){
//         int bit = (n&1);
//         binary1 = bit*pow(10,i++) + binary1;
//         cout<<bit<<endl;
//         n = n >>1;
//     }
//     return binary1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int binary = onedecimal(n);
//     cout<<binary<<endl;
    
// }

// binary to decimal
int onebinary1 (int n ){
    int decimal1 =0;
    int i=0;
    while (n){
        int bit = n%10;
        decimal1 = decimal1 + bit *pow(2,i++);
        // cout<<bit<<endl;
        n /=10;
    }
    return decimal1;
}

int main()
{
    int binaryno;
    cin>>binaryno;
    // int binary = onebinary1(n);
    cout<<onebinary1(binaryno)<<endl;
    
}

