//given n strings print unique string in lexographical order with their frequencies.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second;
        cout<<endl;
    }
    return 0;
}