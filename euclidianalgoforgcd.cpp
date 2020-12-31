#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int res = gcd(3, 6);
    cout << res << endl;
    return 0;
}