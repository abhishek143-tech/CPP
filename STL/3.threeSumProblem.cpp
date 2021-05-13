#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> vec(n);
    for (auto &i : vec)
    {
        cin >> i;
    }
    sort(vec.begin(), vec.end());
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n - 1;
        while (low < high)
        {
            int curr = vec[low] + vec[high] + vec[i];
            if (curr == target)
            {
                found = true;
            }
            if (curr < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    if (found)
    {
        cout << "yes\n";
    }
    else
        cout << "No\n";

    return 0;
}