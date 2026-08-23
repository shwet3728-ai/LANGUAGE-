#include<iostream>
using namespace std;
// int printname(string name){
//     cout<< "HEY "<< name<<endl;
// }
// int main(){
//     string name;
//     cin>> name;
//     printname(name);
//     return 0;
// }
// int sumof(int a,int b)
// {
//     int sum = a+b;
//     // cout<<sum;
//     return sum; 
    

// }
// int main()
// {
//     int a,b;
//     cin>> a >>b;
//     int pk = sumof(a,b);
//     cout<< pk;
//     return 0;
// }

// pass by values
// int dosum(int num){
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;

// }
// int main()
// {
//     int num ;
//     cin>>num;
//     dosum(num);
//     cout<<num <<endl;
//     return 0;

// }



// pass by reference for string & is the sigh of reference 
// int dosum(string &s){
//     s[0]='t';
//     cout<< s<<endl;
    
// }
// int main()
// {
//     string s = "raj" ;
//     dosum(s);
//     cout<< s <<endl;
//     return 0;

// }


int main (){
    int arr[5];
    cin>> arr[0]>> arr[1]>> arr[2]>> arr[3]>> arr[4];
    cout<< arr[0]<<endl<< arr[1]<<endl<< arr[2]<<endl<< arr[3]<<endl<< arr[4];
    return 0;
}