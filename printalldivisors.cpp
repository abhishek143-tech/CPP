#include <bits/stdc++.h>
using namespace std;
void printAllDivisors(int n){
    int i;
    for (i = 1; i*i <n; i++)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for (; i>=1; i--)
    {
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     printAllDivisors(15);
     return 0;
}