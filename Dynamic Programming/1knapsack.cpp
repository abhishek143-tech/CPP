#include <bits/stdc++.h>
using namespace std;
static int dp[100][100];
int knapsack(int wt[],int val[],int w, int n){
    memset(dp,-1,sizeof(dp));
    if(n==0  || w==0){
        return 0;
    }
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    else if(wt[n-1]>w){
        return dp[n][w] = knapsack(wt,val,w,n-1);
    }else{
        return dp[n][w] = max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
} 
int main()
{
    int n = 5;
    int wt[] = {2, 3, 4, 6, 7};
    int val[] = {3, 4, 2, 1, 5};
    int w = 7;
    int res = knapsack(wt, val, w, n);
    cout<<res<<endl;
    return 0;
}