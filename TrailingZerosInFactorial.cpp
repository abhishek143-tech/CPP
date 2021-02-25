#include <bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int n;
     cin>>n;
     int count=0;
     for(int i=5;n/i>=1;i*=5){ //intilialize the loop from 5 and we check that if that number after divide by 5 if it is greater then simply we increment.. Incrementation is in the multiple of 5
         count+=n/i;
     }
     cout<<count<<endl;
     return 0;
}