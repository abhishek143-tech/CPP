#include <bits/stdc++.h>
using namespace std;
int LPS(string s1, string s2, int m, int n){
    int dp[m+1][n+1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
        }
        
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
    }
    return dp[m][n];
    
}
int main(){
     string s1 = "abcdba";
     string s2 = s1;
     reverse(s2.begin(),s2.end());
     int res = LPS(s1,s2,s1.length(),s2.length());
     cout<<res<<endl;
     return 0;
     return 0;
}