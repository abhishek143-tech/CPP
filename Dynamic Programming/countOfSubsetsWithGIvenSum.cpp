#include <bits/stdc++.h>
using namespace std;
// static int dp[100][100];
int countSubsets(int arr[],int n, int sum){
    int dp[n+1][sum+1];
    
    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i < n; i++) //first value in the matrix should be one so we started our loop from 0
    {
        dp[i][0] = 1;
    }
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if(arr[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
        }
        
    }
    
    return dp[n][sum];
}
int main()
{
    int n = 6;
    int arr[] = {2, 3, 5, 6, 8,10};
    int sum=10;
    int res = countSubsets(arr,n,sum);
    cout<<res<<endl;
    return 0;
}