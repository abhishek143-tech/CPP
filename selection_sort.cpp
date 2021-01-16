//selection sort is not a stable sorting algorithm since it may swap the values of adjacent elememts when the are same
#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[min], arr[i]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {2, 10, 12, 43, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
//time complexity = O(n^2);