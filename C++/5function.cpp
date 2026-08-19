// function is block of code that perform a specific task 
#include <iostream>
using namespace std;
// enum traficlight
// {
//     red,
//     yello,
//     green
// };

// int main ()
// {
    
//     traficlight signal = green;
//         if (signal == red)
//         {
//             cout<< "stop";
//         }
//         else if ( signal == yello)
//         {
//             cout<< "get ready";
//         }
//         else{
//             cout<<"move";
//         }
//     return 0;
// }

// enum day{
//     mon, tues,wed,thurs,fri,sat,sun
// };
// int main (){
//     day today = sat;
//     switch(today){
//         case mon:
//             cout<<"START THE WEAK";
//             break;
//         case tues:
//             cout<<"SECOND DAY OF WEAK";
//             break;
//         case wed:
//             cout<<"THIRD DAY OF WEAK";
//             break;
//         case thurs:
//             cout<<"FOURTH DAY OF WEAK";
//             break;
//         case fri:
//             cout<<"FIFTH DAY OF WEAK";
//             break;
//         case sat:
//             cout<<"SIXTH DAY OF WEAK";
//             break;
//         case sun:
//             cout<<"SEVENTH DAY OF WEAK";
//             break;
//         default:
//             cout<<"INVALID INPUT";
//             break;
//     }
//     return 0;
// }


// class student
// {
//     public:
//         static int count;
        
//     student(){
//         ++count;
//     }
// };
// int student::count=0; 
// int main ()
// {
//     student s1;
//     student s2;
//     student s3;
//     cout<<"number of object = " <<student::count <<endl;
//     return 0;
// }



// void printname(string name){
//     cout << "hey " << name;
// }
// int main ()
// {
//     string name;
//     cin>> name;
//     printname(name);
    
//     string name2;
//     cin>> name2;
//     printname(name2);
//     return 0;

// }
// int sum (int a ,int b){
//     int num = a +b ;
//     return num;

// }
// int main()
// {
//     int a,b;
//     cin>> a >>b;
//     int res = sum(a,b);
//     cout << res;
//     return 0;

// }

void sum (int a ,int b){
    int num = a +b ;
    cout << num;

}
int main()
{
    int a,b;
    cin>> a >>b;
    sum(a,b);
    return 0;

}