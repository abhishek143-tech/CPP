#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {10, 10, 20, 30, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    temp[0]=arr[0];
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[res-1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i]=temp[i];
    }
    for (int i = 0; i < res; i++)
    {
        // arr[i]=temp[i];
        cout<<arr[i]<<endl;
    }
    cout<<res<<endl;
    return 0;
}