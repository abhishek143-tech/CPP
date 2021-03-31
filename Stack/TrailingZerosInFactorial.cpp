#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n; //scanf()
     int count=0;
     for(int i=5;n/i>=1;i*=5){ //intilialize the loop from 5 and we check that if that number after divide by 5 if it is greater than or euql to 1 then simply we increment.. Incrementation is in the multiple of 5
         count+=n/i;
     }
     cout<<count<<endl; //printf()
     return 0;
}