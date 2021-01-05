#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {3, 5, 6, 2, 5, 8};
    int res = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxl[n];
    int maxr[n];
    maxl[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxl[i] = max(arr[i], maxl[i - 1]);
    }
    maxr[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        maxr[i] = max(arr[i], maxl[i + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        res = res + (min(maxl[i], maxr[i]) - arr[i]);
    }
    cout<<res<<endl;

    return 0;
}