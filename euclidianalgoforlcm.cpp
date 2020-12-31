#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
    
}
// product of two numbers is nothing but the product of lcm and gcd of those numbers
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int res = lcm(6,4);
     cout<<res<<endl;
     return 0;
}