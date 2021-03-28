#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high)
{
    while (high >= low)
    {
        int mid =  low+(high + low) / 2;
        if (mid == arr[mid])
            return mid;
        else if (mid > arr[mid])
            return binarySearch(arr, (mid + 1), high);
        else
            return binarySearch(arr, low, (mid - 1));
    }
    return -1;
}
int main()
{
    int arr[] = {10, 10, 23, 4, 59};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 0, n - 1);
    return 0;
}