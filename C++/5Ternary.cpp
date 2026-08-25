#include <iostream>
using namespace std;
int main()
{
    // int age;
    // cin>> age;
    // if(age>18)
    // {
    //     cout<<"can vote";
    // }
    // else{
    //     cout<<"cannot vote";
    // }
    
    
    
    // samller way
    // (age>18) ? cout<<"can vote" : cout<<"cannot vote";
    // return 0;

    int x;
    int y;
    cout<<"Enter the valu of x:";
    cin>>x;
    cout<<"Enter the valu of y:";
    cin>>y;
    int result = (x>y)? x:y;
    cout<<"The larger value is : " << result <<endl;




}