#include <bits/stdc++.h>
using namespace std;
void patSearching(string &txt, string &pat)
{
    int m = txt.length();
    int n = pat.length();
    for (int i = 0; i <= (m - n); i++)
    {
        int j;
        for (j = 0; j < n; j++)
            if (pat[j] != txt[i + j])
                break;

        if (j == n)
            cout << i << " ";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str = "AAAAA";
    string pat = "AAA";
    patSearching(str, pat);
    return 0;
}