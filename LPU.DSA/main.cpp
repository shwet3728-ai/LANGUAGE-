#include <iostream>
using namespace std;
// int main()
// {
//     int data[6] = {1, 2, 3, 4, 5, 6};
//     int n = 6;
//     int ib = 0;
//     int ub = 5;

//     int index = ib;
//     cout<<"The array data is :"<<endl;
//     while(index <= ub)
//     {
//         // cout<<"The array data is :"<<endl;
//         cout << data[index] << endl;
//         index++;
//     }

//     return 0;
// }
#define MAXSIZE 10
class myclass
{
    private:
        int data[MAXSIZE],n,lb,ub;
    public: 
        datatype input()
        {
            int n;
        cout<<"Enter how many values :";
        cin >> n;
        int data[n];
        int lb = 0;
        int ub =n-1;
        cout<<"Enter the value of n :";
        for ( int index =lb ; index <= ub; index = index +1)
        {
        cin >> data [index];
        }

        }
        void print()
        {
            cout<<"The arrey data is : ";
            for (int index = lb; index <=ub;index= index+1)
            {
                cout<<data[index] << " ";
            }
        }

};
int main ()
{
    MyArray marks ;
    marks.print

    return 0;


}