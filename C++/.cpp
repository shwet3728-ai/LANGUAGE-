#include <iostream>
using namespace std;
// int area(int side)
// {
//     return side *side;
// }
// float area(float radius)
// {
//     return 3.14*radius*radius;
// }
// int area(int length ,int brearth)
// {
//     return length * brearth;
// }

// class calcu
// {

//     int area(int side)
//     {
//         return side * side;
//     }
//     double area(double radius)
//     {
//         return 3.14 * radius * radius;
//     }
//     int area(int length, int breadth)
//     {
//         return length * breadth;
//     }
// };
// int x=100;

// int main()
// {
//     int x =10;
//     cout<<x;
// }
// {
//     calcu c;
//     cout << area(9) << endl;
//     cout << area(35.0f) << endl;
//     cout << area(2, 5) << endl;
// }

// class student
// {
// private:
//     int marks;

// public:
//     student()
//     {
//         marks = 90;
//     }
//     friend void display(student s);
// };
// void display(student s)
// {
//     cout << "Marks :" << s.marks << endl;
// }

// int main()
// {
//     student s;
//     display(s);
// }



// void change (int *x){
//     *x= 100;
// }
// int main ()
// {
//     int a =10 ;
//     change(&a);
//     cout<< a;
//     return 0 ;
// }


// void swap (int x ,int y)
// {
//     *x = 100;
//     *y=12;

// }
// int main ()
// {
//     int a=20;
//     int b=90;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     return 0;
    
// }


int fact (int h )
{
    if (h==0 / h==1)
    {
        return 0;
    }
    else
        return h*fact(h-1);
}