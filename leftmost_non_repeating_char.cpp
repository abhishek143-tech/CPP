#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int leftmost(string &str)
{
    bool visited[CHAR];
    fill(visited, visited + CHAR, false);
    int res = -1;
    for (int i = str.length(); i >= 0; i--)
    {
        if (visited[str[i]])
        {
            visited[str[i]] = false;
        }
        else
        {
            visited[str[i]] = true; //it is first occurance of that element
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (visited[str[i]])
        {
            res = i;
            break;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str = "geeksforgeeks";
    int res = leftmost(str); // returns the index of leftmost repeating character
    cout << res << endl;
    return 0;
}