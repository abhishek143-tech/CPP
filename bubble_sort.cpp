//bubble sort is a stable sorting algorithm since it does swap the values of adjacent elememts when they are same
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {2, 10, 12, 43, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
//time complexity = O(n^2);