#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int val, int n)
{
    int dp[n + 1][val + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1; //true
    }
    for (int i = 1; i <= val; i++)
    {
        dp[0][i] = 0; //false
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= val; j++)
        {
            if (arr[i - 1] > val)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            }
        }
    }
    return dp[n][val];
}

int main()
{

    int arr[6] = {1, 4, 5, 7, 8, 11};
    int n = 6;
    //16==>11,5  11,4,1  7,8,1  7,5,4
    int sum = accumulate(arr, arr + n, sum);
    cout<<sum;
    // int val = 16;
    // int res = solve(arr,val,6);
    // cout<<res<<endl;
    return 0;
}