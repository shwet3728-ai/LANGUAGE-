#include<iostream>
using namespace std;
int main ()
{
    int *p = new int(100);
    if (p== nullptr)
    cout<<"Pointer has no target :"<<p;
    return 0;

}
