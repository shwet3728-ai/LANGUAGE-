#include <iostream>
using namespace std;
void print2darr(int arr[][4], int i, int j)
    {
        for (int i = 0; i <= row - 1; i++)
        {
            for (int j = 0; j <= col - 1; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
// int main()
// {
    // declear
    //  int arr[4][4];
    // inatialize
    //  int arr[4][4] = {{1,2,3,4},{5,6,7,8},{12,23,34,45},{4,53,2,6}};
    //  cout<<arr[1][3];

    // int arr[2][4]={{1,2,3,4},{5,6,7,8}};
    // cout<<arr[1][2];

    // int arr[4][4] = {{1,2,3,4},{5,6,7,8},{12,23,34,45},{4,53,2,6}};
    // int row=4;
    // int col=4;
    // //loop in 2d array
    // for (int i=0;i<=row-1;i++){
    //     for(int j=0;j<=col-1;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<arr[1][3];
    
//     int arr[4][4];
//     int row = 4;
//     int col = 4;
//     // loop in 2d array
//     for (int i = 0; i <= row; i++)
//     {
//         for (int j = 0; j <= col; j++)
//         {
//             cout << "Enter the input of the array[" << i << "][" << j << "]:";
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
//     print2darr(arr, row, col);
// }