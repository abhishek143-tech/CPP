#include <bits/stdc++.h>
using namespace std;
bool checkForArmstrong(int n)
{
    int num = n;
    int rem = 0, arm = 0;
    while (n > 0)
    {
        rem = n % 10;
        arm += rem * rem * rem;
        n = n / 10;
    }
    if (num == arm)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int lb, ub;
    cin >> lb >> ub;
    if (lb <= 0 || ub <= 0)
    {
        cout << "wrong input" << endl;
    }
    else
    {
        for (int i = lb; i <= ub; i++)
        {
            if (checkForArmstrong(i))
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}