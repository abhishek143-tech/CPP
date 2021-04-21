#include <bits/stdc++.h>
using namespace std;

int MinimumCoinChange(int coins[], int M, int V)
{
    int dp[M + 1][V + 1];
    for (int i = 0; i <= V; i++)
        dp[0][i] = INT_MAX - 1;
    for (int i = 1; i <= M; i++)
        dp[i][0] = 0;
    for (int j = 1; j <= V; j++)
    {
        if (j % coins[0] == 0)
        {
            dp[1][j] = (j / coins[0]);
        }
        else
        {
            dp[1][j] = INT_MAX - 1;
        }
    }
    for (int i = 2; i <= M; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            if (coins[i - 1] <= j)
            {
                dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[M][V] < INT_MAX - 1)
        return dp[M][V];
    else
        return -1;
}

int main()
{

    int coins[] = {1, 2, 3};
    int n = sizeof(coins) / sizeof(coins[0]);
    int W = 4;
    int ans = MinimumCoinChange(coins, n, W);
    cout << ans << "\n";
}