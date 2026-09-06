#include <iostream>
#include<string>
using namespace std;
// // int summ ( int a , int b)
// // {
// //     int result = a+b;
// //     return result;
// // }

// // int main()
// // {
// //     int a;
// //     int b;
// //     cin>>a;
// //     cin>>b;
// //     int num =summ(a,b);
// //     cout<<num;
// //     return 0;
// // }

// // void printmyname ()
// // {
// //     cout<<"shwet"<<endl;
// // }
// // int main(){
// // printmyname();
// // }

// int multiply (int a,int b ,int c)
// {
//     int result = a* b * c;
//     return result;
// }
// void tentime()
// {
//     for (int i =1;i <=10;i++){
//         cout<<"shwet"<<endl;
//     }
// }
// void multiple(int num)
// {
//     for (int i =1;i <=10;i++){
//         cout<<num*i<<endl;
//     }
// }

// int tepconv(int far)
// {
//     int cel = (far-32)*5/9;
//     return cel;
// }

// char uptolow(char ch )
// {
//     char ans = ch -'a' + 'A';
//     return ans;
// }
// int main()
// {   //Function call
//     // int king =  multiply(5,4,3);
//     // cout<<king<<endl;
//     // tentime();
//     // int num;
//     // cin>>num;
//     // multiple(num);
//     // int far=32;
    
//     // int ans=tepconv(far);
//     // cout<<ans;

//     char result = uptolow('a');
//     cout<<result;
//     return 0;
// }

// void helloworld()
// {
//     cout<<"Hello world";
// }

// void welcome()
// {
//     cout<<"Welcome to C++";
// }

// int printNumber()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"The number is: "<<n<<endl;

// }
// void printName()
// {
//     string name;
//     cout<<"Enter the name: ";
//     getline(cin,name);
//     cout<<"Your name is : "<<name<<endl;


// }


// int printNumber()
// {
//     int number;
//     cout<<"Enter the value upto you want to print: ";
//     cin>>number;
//     for (int i=0;i<=number;i++)
//     {
//         cout<<i<<endl;
//     }
// }

// void printEven()
// {
//     int number;
//     cout<<"Enter the value upto you want to print: ";
//     cin>>number;
//     for (int i=0;i<=number;i=i+2)
//     {
//         // i%2==0;
//         cout<<i<<endl;
//     }

// }

// void printOdd()
// {
//     int number;
//     cout<<"Enter the value upto you want to print: ";
//     cin>>number;
//     for (int i=1;i<=number;i=i+2)
//     {
//         // i%2==0;
//         cout<<i<<endl;
//     }

// }

// void multiplicationTable()
// {
//     int number;
//     cout<<"Enter the number for multiplication: ";
//     cin>>number;
//     for (int i =0; i<=10;i++)
//     {
//         cout<<number<<" * "<<i<<" = "<<number*i<<endl;

//     }
    
// }

// void Ntoone()
// {
//     int lastNumber;
//     cout<<"Enter number from where you want reverse: ";
//     cin >>lastNumber;
//     for (int i =lastNumber;i>=0;i--)
//     {
//         cout<<i<<endl;
//     }
// }

// void numisOddEven()
// {
//     int number ;
//     cout<<"Enter the number: ";
//     cin>>number;
//     if(number%2==0)
//     {
//         cout<<"The number is Even"<<endl;
//     }
//     else{
//         cout<<"The number is Odd";
//     }
// }

// int sumOfnumber(int number1,int number2,int sum)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the second number: ";
//     cin>>number2;

//     sum = number1+number2;
//     return sum;
// }

// int substractOfnumber(int number1,int number2,int substract)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the second number: ";
//     cin>>number2;

//     substract = number1-number2;
//     return substract;
// }

// int multiplicationOfnumber(int number1,int number2,int multiply)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the second number: ";
//     cin>>number2;

//     multiply = number1**number2;
//     return multiply;
// }

// int divisionOfnumber(int number1,int number2,int divide)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the second number: ";
//     cin>>number2;

//     divide = number1/number2;
//     return divide;
// }
// int squareOfnumber(int number1,int number2,int square)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
    

//     square = number1*number1;
//     return square;
// }
// int cudeOfnumber(int number1,int number2,int cude)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
    

//     cude = number1*number1*number1;
//     return cude;
// }


// void maxofnumber(int number1,int number2)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the secood number: ";
//     cin>>number2;
//     if(number1<number2)
//     {
//         cout<<"Number1 is the gratest";
//     }
//     else{
//         cout<<"Number2 is the greatest";
//     }
// }

// void minofnumber(int number1,int number2)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the secood number: ";
//     cin>>number2;
//     if(number1<number2)
//     {
//         cout<<"Number1 is the smallest";
//     }
//     else{
//         cout<<"Number2 is the smallest";
//     }
// }

// void maxofnumber(int number1,int number2,int number3)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the secood number: ";
//     cin>>number2;
//     cout<<"Enter the secood number: ";
//     cin>>number3;
//     if(number1>number2 && number1 >number3)
//     {
//         cout<<"Number1 is the Greatest";
//     }
//     else if (number2 >number1 && number2 >number3){
//         cout<<"Number2 is the Greatest";
//     }
//     else{
//         cout<<"Number3 is the greatest";
//     }
// }

// void minofnumber(int number1,int number2,int number3)
// {
//     cout<<"Enter the first number: ";
//     cin>>number1;
//     cout<<"Enter the secood number: ";
//     cin>>number2;
//     cout<<"Enter the secood number: ";
//     cin>>number3;
//     if(number1<number2 && number1 <number3)
//     {
//         cout<<"Number1 is the Smallest";
//     }
//     else if (number2 <number1 && number2 <number3){
//         cout<<"Number2 is the Smallest";
//     }
//     else{
//         cout<<"Number3 is the Smallest";
//     }
// }

// void numberCheck()
// {
//     int number;
//     cout<<"Enter the number: ";
//     cin>>number;
//     if (number >0)
//     {
//         cout<<"Number is positive";
//     }
//     else if (number <0)
//     {
//         cout<<"Number is negative: ";
//     }
//     else {
//         cout<<"Number is Zero";
//     }
// }


// void voteElligibalityCheck()
// {
//     int age;
//     cout<<"Enter the age of the candidate: ";
//     cin>>age;
//     if (age>=18)
//     {
//         cout<<"You are elligible for voting";
//     }
//     else {
//         cout<<"You are underage";
//     }
    
// }

// int areaofRectangle(int length,int breadth,int area)
// {
//     cout<<"Enter the length of the rectangle: ";
//     cin>>length;
//     cout<<"Enter the breadth of the rectangle: ";
//     cin>>breadth;
//     area=length*breadth;
//     return area;

// }

// float percentage (int subject1,int subject2,int subject3,int subject4,int subject5)
// {
//     cout<<"Enter the mark obtained by subject1: ";
//     cin>>subject1;
//     cout<<"Enter the mark obtained by subject2: ";
//     cin>>subject2;
//     cout<<"Enter the mark obtained by subject3: ";
//     cin>>subject3;
//     cout<<"Enter the mark obtained by subject4: ";
//     cin>>subject4;
//     cout<<"Enter the mark obtained by subject5: ";
//     cin>>subject5;
//     float total= (subject1+subject2+subject3+subject4+subject5);
//     float percentage1=(total/500.0)*100;
//     return percentage1;
// }

// int sum(int a,int b)
// {

//     return a%b;
// }

// int square(int a)
// {
//     return a*a*a;
// }

// bool isEven(int a)
// {
//     return a%2==0;
// }

bool isPositive(int n)
{
    return n>0;
}
int main()
{
    cout<<isPositive(3);
    // cout<<isEven(3);
    // cout<<square(10);
    // cout<<sum(5,2);
    
    // float percentage1;
    // percentage1=percentage(0,0,0,0,0);
    // cout<<"The percentage obtained is : "<<percentage1<<endl;
    // int area;
    // area=areaofRectangle(0,0,0);
    // cout<<area<<endl;
    // voteElligibalityCheck();
    // numberCheck();
    // minofnumber(0,0,0);
     // minofnumber(0,0);
    // maxofnumber(0,0);
    // int cude;
    // cude=cudeOfnumber(0,0,0);
    // cout<<cude;
    // int square;
    // square = squareOfnumber(0,0,0);
    // cout <<square;
    // int divide;
    // divide =divisionOfnumber(0,0,0);
    // cout<<divide;
    // int substract;
    // substract = substractOfnumber(0,0,0);
    // cout<<substract;
    // int sum;
    // sum = sumOfnumber(0,0,0);
    // cout<<sum;
    // numisOddEven();
    // Ntoone();
    // multiplicationTable();
    // printOdd();
    // printNumber();
    // printName();
    // printNumber();
    // welcome();
    return 0;

}

