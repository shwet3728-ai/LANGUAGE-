#include <iostream>
using namespace std;
// int main()
// {
// declearation
// int arr[12];
// int brr[5] = {1, 2, 3, 4, 5};
// int crr[] = {1, 3, 4, 2, 2, 4, 4, 5};
// int multiple[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

// cout << multiple[6];
// traverse
// for (int index = 0; index <= 9; index++)
// {
//     cout << multiple[index] << " ";
// }
// taking the input in the arrays
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << "Enter the values[" << i << "]:";
//         cin >> arr[i];
//         cout << endl;
//     }
//
// }

// int main()
// {
// int arr [3][3];
// for (int i=0;i<3;i++)
// {
//     for (int j=0;j<3;j++)
//     {
//         cin>> arr[i][j];
//         cout<<arr[i][j]<<" ";
//     }
// }
// for (int i=0;i<3;i++){
//     for (int j =0;j<3;j++){
//         cout<<"Enter the values [<<{i}{j}<<]";
//         cout<<arr[i][j]<< " ";

//     }
//     cout<<endl;
// }

// printing sum od 2d array
//  int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {3, 4, 5}};
//  {
//      int arr[][3] = {{10, 20, 30},{40,50,60},{70,80,90}};
//      int sum = 0;
//      for (int i = 0; i < 3; i++)
//      {
//          for(int j =0;j<3;j++)
//          sum = sum + arr[i][j];
//      }
//      cout << sum << endl;

//     return 0;
// }

class matrix
{
    int a[2][2];

public:
    void input()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    int sum()
    {
        int s = 0;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                s += a[i][j];
            }
            return s;
        }
    }
};
int main()
{
    matrix m;
    m.input();
    m.display();
    cout << "sum = " << m.sum();
}                               