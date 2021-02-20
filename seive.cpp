#include <bits/stdc++.h>
using namespace std;
void seive(int n)
{
    int arr[n];
    memset(arr,0,sizeof(arr));
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive(20);
    return 0;
}