#include <bits/stdc++.h>
using namespace std;
int knapSack(int wt[],int val[],int w, int n){
    
    int dp[n + 1][w + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= w; i++)
    {
        dp[0][i] = 0; 
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (wt[i - 1] > w)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
            }
        }
    }
    return dp[n][w];
} 
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
     
    cout << knapSack(wt,val,W,n);
    return 0;
}