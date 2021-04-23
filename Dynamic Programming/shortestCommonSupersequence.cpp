#include <bits/stdc++.h>
using namespace std;
int Lcs(string s1, string s2 , int m , int n){
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
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
    }

 return s1.length() + s2.length() - dp[m][n];
    
}
int main(){
     string s1 = "aggtab";
     string s2 = "gxtxayb";
     int res = Lcs(s1,s2,s1.length(),s2.length());
     cout<<res<<endl;
     return 0;
}