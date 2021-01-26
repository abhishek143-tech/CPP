#include <bits/stdc++.h>
using namespace std;
bool checkForSubsequence(string &str, string &str1)
{
    int k = 0, j = 0;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[k] == str1[j])
        {
            k++;
            j++;
            count++;
        }
        else
        {
            k++;
        }
    }
    if (count == str1.length())
    {
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str = "abhishek";
    string str1 = "abhi";
    bool ans = checkForSubsequence(str, str1);
    cout << ans << endl;

    return 0;
}