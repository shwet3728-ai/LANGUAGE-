#include<iostream>
using namespace std;
class Student
{
    public:
        string name;
        void display();

};
void Student :: display()
{
    cout << "Name: " << name << endl;
}
int main()
{
    Student s1;
    s1.name = "Rahul";
    s1.display();
    return 0;
}