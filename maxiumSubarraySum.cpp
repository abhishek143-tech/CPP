#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1, 2, -4, 5, 6, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_so_far = 0;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_so_far += arr[i];
        if(max<max_so_far){
            max = max_so_far;
        }
        if(max_so_far<0){
            max_so_far = 0;
        }
    }
    cout<<max<<endl;
    return 0;
}