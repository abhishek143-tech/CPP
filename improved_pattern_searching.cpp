//this algorithm takes linear time when the pattern contains distinct characters
#include <bits/stdc++.h>
using namespace std;
void patSearchinng(string &txt, string &pat)
{
    int n = txt.length();
    int m = pat.length();
    for (int i = 0; i <= (n - m);)
    {
        int j;
        for (j = 0; j < m; j++)
            if (pat[j] != txt[i + j])
                break;

        if (j == m)
            cout << i << " ";
        if (j == 0)
        {
            i++;
        }
        else
        {
            i = (i + j);
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str = "ABSABSABCD";
    string pat = "ABC";
    patSearchinng(str, pat);
    return 0;
}