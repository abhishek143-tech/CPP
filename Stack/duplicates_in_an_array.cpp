#include <bits/stdc++.h>
using namespace std;
void duplicate(int arr[], int n){
     sort(arr,arr+n);
     for (int i = 0; i < n; i++)
     {
          if((arr[i]^arr[i+1])==0){
               cout<<arr[i]<<endl;
          }
     }
     
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int arr[]={6,2,2,4,5,5};
     int n = sizeof(arr)/sizeof(arr[0]);
     duplicate(arr,n);
     return 0;
}