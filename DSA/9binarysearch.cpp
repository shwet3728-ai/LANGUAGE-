#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}



int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = 7;
    int target = 15;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}