#include <iostream>
using namespace std;
// int summ ( int a , int b)
// {
//     int result = a+b;
//     return result;
// }

// int main()
// {
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     int num =summ(a,b);
//     cout<<num;
//     return 0;
// }

// void printmyname ()
// {
//     cout<<"shwet"<<endl;
// }
// int main(){
// printmyname();
// }

int multiply (int a,int b ,int c)
{
    int result = a* b * c;
    return result;
}
void tentime()
{
    for (int i =1;i <=10;i++){
        cout<<"shwet"<<endl;
    }
}
void multiple(int num)
{
    for (int i =1;i <=10;i++){
        cout<<num*i<<endl;
    }
}

int tepconv(int far)
{
    int cel = (far-32)*5/9;
    return cel;
}

char uptolow(char ch )
{
    char ans = ch -'a' + 'A';
    return ans;
}
int main()
{   //Function call
    // int king =  multiply(5,4,3);
    // cout<<king<<endl;
    // tentime();
    // int num;
    // cin>>num;
    // multiple(num);
    // int far=32;
    
    // int ans=tepconv(far);
    // cout<<ans;

    char result = uptolow('a');
    cout<<result;
    return 0;
}