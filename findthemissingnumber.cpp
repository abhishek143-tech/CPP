#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1, 2, 3, 5};
    int s = 1, e = 4;
    int res1 = 0;
    int res = 0;
    for (int i = 1; i <= 5; i++)
    {
        res = res ^ i;
    }
    for (int i = 0; i < 4; i++)
    {
        res1 = res1 ^ arr[i];
    }
    int final = res1 ^ res;
    cout << final << endl;
    return 0;
}