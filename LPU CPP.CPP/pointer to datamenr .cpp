#include <iostream>
#include <string>
using namespace std;
// class Employee
// {
// public:
//     int salary;
// };

// int main()

// {
//     int Employee:: *pm = &Employee:: salary ;
//     Employee e;
//     e.*pm = 50000;
//     cout<<"Salary=" <<e.*pm;

//     ;
// }

// class student{
//     public:
//         int marks ;
// };
// int main ()
// {
//     int student :: *pm = &student :: marks;
//     student s;
//     student *p=&s;
//     p->*pm = 99;
//     cout << "Cgpa of arpit is =  " <<p->*pm<<endl;
// }

// int main (){
//     string name ;
//     getline(cin,name);
//     cout<<name;
//     return 0;
// }

// int main()
// {
//     string name ="shwet";
//     string name1 = name;
//         name1="anand";
//     cout<<name<<endl;
//     cout<<name1<<endl;

// }
// int main ()
// {
//     string name1 = "Shwet ";
//     string name2;
//         name2 = name1;
//     name1 = "Anand";
//     cout<<name1<<endl;
//     cout<<name2<<endl;
// }

// int main()
// {
//     string text = "Hello world";
//     cout <<"Length = "<<text.length()<<endl;
//     cout<<"Size ="<<text.size();
//     return 0;
// }

// int main()
// {
//     string a, b;
//     cin >> a >> b;
//     if (a == b)
//         cout << "is equal";
//     else
//         cout << "not equal";
// }

// class Employee
// {
// public:
//     int id, salary;
//     Employee()
//     {
//         id = 1001;
//         salary = 3000;
//     }
//     void display()
//     {
//         cout << "ID= " << id<<":" << endl;
//         cout << "Salalry= " << salary<<":" << endl;
//     }
// };
// int main()
// {
//     Employee el;
//     el.display();
//     return 0;
// }

// class TEST
// {
// public:
//     TEST()
//     {
//         cout << "Construction\n";
//     }
//     void show()
//     {
//         cout << "Function\n";
//     }
// };
// int main()
// {
//     TEST t;
//     t.show();
// }

// class Student{
//     public:
//         int roll;
//         Student (){
//             roll=0;
//         }
//         void setRoll(int r){
//             roll =r;
//         }
//         void show (){
//             cout<<roll<<endl;
//         }
// };
// int main (){
//     Student s1,s2,s3;
//     s1.setRoll(101);
//     s2.setRoll(102);
//     s3.setRoll(103);
//     s1.show();
//     s2.show();
//     s3.show();
// }

// class balance{
//     public:
//         int balance;
//         balance (){
//             balance=1000;
//             cout<<"Account created "<<endl;
//         }
//         void show(int r){
//             cout<<"Balance = "<<balance<<endl;
// };
// int main (){
//     Account =a1;
//     Account a2;
//     Account a3;
//     a1.show();
//     a2.show();
//     a3.show();
// }

// class demo {
//     public:
//         demo(){
//             cout <<"c"<<endl;}
//         ~demo(){cout<<"d"<<endl;}
// };
// int main()
// {
//     demo d1;
//     demo d2;
//     demo d3;
//     cout <<"M"<<endl;
//     return 0;
// }

// class Box{
//     int id;
// public:
//     Box(int x)
//     {
//         id = x;
//         cout<<"Created Box"<<id<<endl;

//     }
//     ~Box()
//     {
//         cout<<"Destroyed Box"<<id <<endl;
//     }
// };
// int main ()
// {
//     Box b1(1);
//     Box b2(2);

//     Box b3(3);
//     return 0;
// }

// class Demo{
// public:
//     Demo(){
//         cout<<"Constructor"<<endl;}
//     ~Demo(){
//         cout<<"Destroctor"<<endl;}

// };
// int main ()
// {
//     cout<<"Before block"<<endl;
//     {
//         Demo d1;
//         cout <<"Inside block"<<endl;
//     }
//     cout<<"After "<<endl;
// }

// class Demo
// {
//     int id;

// public:
//     Demo(int x) : id(x)
//     {
//         cout << "C" << id << endl;
//     }
//     ~Demo()
//     {
//         cout << "D" << id << endl;
//     }
// };
// int main()
// {
//     Demo a(1);
//     {
//         Demo b(2);
//         {
//             Demo c(3);
//         }
//     }
// }

// defult constructure

// class student
// {
//     int roll;
//     public:
//     student(){
//         roll=0;
//     }
//     void display(){
//         cout<<"ROLL = " <<roll<<endl;
//     }
// };
// int main()
// {
//     student s1;
//     s1.display();
//     return 0;
// }

// class student
// {
//     int roll;
//     float marks;
//     public:
//     student(int r, float m){
//         roll=r;
//         marks=m;
//     }
//     void display(){
//         cout<<"ROLL = " <<roll<<endl;
//         cout<<"MARKS = " <<marks<<endl;
//     }
// };
// int main()
// {
//     student s1(101,85.5);
//     student s2(102,91.0);
//     s1.display();
//     s2.display();
//     return 0;
// }
// class account
// {
//     int accountno;
//     double balance;
//     public:
//     account(int no, double b){
//         accountno= no;
//         balance =b;
//     }
//     void display(){
//         cout<<"Account no = " <<accountno<<endl;
//         cout<<"Balance = " <<balance<<endl;
//     }
// };
// int main()
// {
//     account a1(1010,5000);
//     account a2(1029,8500);
//     a1.display();
//     a2.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Box
// {
//     int length;

// public:
//     Box()
//     {
//         length = 0;
//     }

//     Box(int l)
//     {
//         length = l;
//     }

//     Box(int l, int b)
//     {
//         length = l;
//     }

//     void display()
//     {
//         cout << "Length = " << length << endl;
//     }
// };

// int main()
// {
//     Box b1;
//     Box b2(10);
//     Box b3(20, 30);

//     b1.display();
//     b2.display();
//     b3.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Book {
//     int id;

// public:
//     Book(int x) {
//         id = x;
//     }

//     Book(const Book& b) {
//         id = b.id;
//         cout << "Copy constructor called" << endl;
//     }

//     void display() {
//         cout << "Book ID = " << id << endl;
//     }
// };

// int main() {
//     Book b1(101);
//     Book b2(b1);
//     Book b3(b2);

//     b1.display();
//     b2.display();
//     b3.display();

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
//     int roll;
//     string name;

// public:
//     Student(int r = 0, string n = "Unknown")
//     {
//         roll = r;
//         name = n;
//     }

//     void display()
//     {
//         cout << "Roll = " << roll << endl;
//         cout << "Name = " << name << endl;
//     }
// };

// int main()
// {
//     Student s1;
//     Student s2(101);
//     Student s3(102, "Rahul");

//     cout << "Student 1:" << endl;
//     s1.display();

//     cout << "\nStudent 2:" << endl;
//     s2.display();

//     cout << "\nStudent 3:" << endl;
//     s3.display();

//     return 0;
// }


