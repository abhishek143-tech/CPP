#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1, 2, 0, 34, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] !=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}