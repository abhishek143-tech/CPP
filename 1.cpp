#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll res;
        if (n == 1 || m == 1)
        {
            for (ll i = k + 2; i <= k + n + m; i++)
            {
                res = res^ i;
            }
        }
        else
        {
            ll r1 = k + 2;
            ll r2 = k + n + m;
            res = r1 ^ r2;
        }
        cout << res << endl;
    }
    return 0;
}