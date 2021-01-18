#include <bits/stdc++.h>
using namespace std;
void mergeSort(int arr[], int arr1[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr[i] <= arr1[j])
        {
            cout << arr[i] << " ";
            i++;
        }
        else
        {
            cout << arr1[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << arr[i] << " ";
        i++;
    }

    while (j < n)
    {
        cout << arr1[j] << " ";
        j++;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {2, 10, 12, 43};
    int arr1[] = {3, 4, 6,67, 339};
    int m = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr1) / sizeof(arr1[0]);
    mergeSort(arr, arr1, m, n);
    return 0;
}
//time complexity = O(n^2);