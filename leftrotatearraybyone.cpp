#include <bits/stdc++.h>
using namespace std;
void rotateArray(int arr[],int low,int high){
    while (low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int arr[]={1,2,3,4,5};
     int n = sizeof(arr)/sizeof(arr[0]);
     int d =4;
     rotateArray(arr,0,d-1);
     rotateArray(arr,d,n-1);
     rotateArray(arr,0,n-1);
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<endl;
     }
     
     return 0;
}