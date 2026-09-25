#include <iostream>
using namespace std;

// void selection_sorting(int arr[], int n)
// {
//     for (int i = 0; i <= n - 2; i++)
//     {
//         int mini = i;

//         for (int j = i + 1; j < n; j++)
//         {
//             // Use '<' for ascending order
//             // Use '>' for descending order
//             if (arr[j] < arr[mini])
//             {
//                 mini = j;
//             }
//         }

//         int value = arr[mini];
//         arr[mini] = arr[i];
//         arr[i] = value;
//     }
// }

// int main()
// {
//     int n;

//     cout << "Enter the length of the array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     selection_sorting(arr, n);

//     cout << "Sorted array is: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// arr[j] < arr[mini] →Ascending: smallest element comes first.
//arr[j] > arr[mini] →Descending: largest element comes first.
//Time Complexity: O(n²)
//Space Complexity:O(1)


// void bubble_Sorting (int arr[],int n)
// {
//     for(int i =n-1;i>=0;i--)
//     {
//         int inalreadysoeted =0;
//         for (int j =0;j<=i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp =arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//                 inalreadysoeted=1;
//             }
//         }
//         if (inalreadysoeted == 0)
//         {
//             break;
//         }
//         cout<<"run\n";

//     }
// }
// int main()
// {
//     int n;

//     cout << "Enter the length of the array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bubble_Sorting(arr, n);

//     cout << "Sorted array is: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

void insertion_sorting(int arr[],int n )
{
    for (int i =0; i<=n-1;i++)
    {
        int j =i;
        while (j>0 && arr[j-1]> arr[j])
        {
            int temp= arr[j-1];
            arr[j-1]= arr[j];
            arr[j]= temp;
            j--;
            cout<<"n\n";
        }
        
    }
}
int main()
{
    int n;

    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sorting(arr, n);

    cout << "Sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}