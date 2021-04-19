#include <bits/stdc++.h>
using namespace std;
int un_kp(int price[], int length[], int n, int len) //coin[] 
{

    int dp[n + 1][len + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= len; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= len; j++)
        {
            if (length[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(price[i - 1] + dp[i][j - length[i - 1]], dp[i - 1][j]);
            }
        }
    }
    return dp[n][len];
}
int main()
{
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(price[0]);
    int length[n];
    for (int i = 0; i < n; i++)
    {
        length[i] = i + 1;
    }
    int Max_len = n;

    // Function Call
    cout << "Maxmum obtained value  is "
         << un_kp(price, length, n, Max_len) << endl;
    return 0;
}