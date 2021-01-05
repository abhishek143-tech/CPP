#include <bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int arr[] = {0,0};
     int n = sizeof(arr)/sizeof(arr[0]);
     int maxi = INT_MIN;
     int count=0;
     for(int i=0;i<n;i++){
         if(arr[i]!=1){
             count=0;
         }else{
             count++;
             maxi = max(maxi,count);
         }
     }
     cout<<count<<endl;
     return 0;
}