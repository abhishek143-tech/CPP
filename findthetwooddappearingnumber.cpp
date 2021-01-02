#include <bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int arr[] = {3,4,3,4,8,4,4,32,7,7};
     int n = sizeof(arr)/sizeof(arr[0]);
     int x=0,res1=0,res2=0;
    for (int i = 0; i < n; i++)
    {
        x = x^arr[i];
    }
    int setbit = x & ~(x-1);
    for (int i = 0; i < n; i++)
    {
        if((setbit&arr[i])!=0){
            res1 = res1 ^ arr[i];
        }else{
            res2 = res2 ^ arr[i];
        }
    cout<<res1<<" "<<res2<<endl;
    
    
     return 0;
}