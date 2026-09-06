#include <iostream>
using namespace std;
// int main()
// {
// declearation
// int arr[12];
// int brr[5]={1,2,3,4,5};
// int crr[]={1,3,4,2,2,4,4,5};
// int multiple[10]= {2,4,6,8,10,12,14,16,18,20};

// cout<<multiple[6];
// traverse
// for (int index=0;index<=9;index++){
//     cout<<multiple[index]<<" ";
// }
// taking the input in the arrays
// for (int i =0;i <=5;i++){
//     cout<<"Enter the values["<<i<<"]:";
//     cin >>arr[i];
//     cout<<endl;

// }
// after taking array printing the array
// for (int i=0;i<=5;i++)
// {
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// print the sum of the array using there index
//  {
//      int arr[] = {10, 20, 30, 40, 50} ;
//      int sum = 0;
//      for (int i = 0; i <= 4; i++)
//      {
//          sum = sum + arr[i];
//      }
//      cout << sum<<endl;

// return 0;
// }

// pssing array using function.......
 void printarray(int arr[],int size)
 {
     for (int i =0; i<=size-1;i++)
     {
         cout<<arr[i]<<" ";
     }

}
// int main()
// {
//     int arr []= {10,191,17,12};
//     int size =4;
//     printarray(arr,size);
//     return 0;
// }

// void multiple(int num[], int size)
// {
//     int count = 1;
//     for (int i = 0; i < size; i++)
//     {
//         num[i] = 10 * count;
//         count++;
//     }
// }
// int main()
// {
//     int arr[10];
//     int size[10];
//     multiple(arr, 10);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

void flipzerotoone (int arr[],int size)
{
    for (int i =0 ; i <= size;i++)
    {
        if (arr[i]==1){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
}
int main ()
{
    
    int arr[]={1,0,1,1,1,0,0,0};
    int size= 8;
    cout<<"Before: ";
    printarray(arr,size);
    cout<<endl;
    flipzerotoone(arr, size);
    cout<<"After: ";
    printarray(arr,size);
    cout<<endl;

}