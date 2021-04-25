#include <bits/stdc++.h>
using namespace std;
int numberOfWays(int coins[],int n,int val) //coin[] 
{

    int dp[n + 1][val + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= val; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= val; j++)
        {
            if (coins[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] =  dp[i][j - coins[i - 1]] +  dp[i - 1][j];
            }
        }
    }
    return dp[n][val];
}
int main()
{
    int coins[] = {1,2,3};
    int n = sizeof(coins) / sizeof(coins[0]);
    int val = 4;
    int res = numberOfWays(coins,n,val);
    cout<<res<<endl;
    return 0;
}