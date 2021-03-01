// C++ program to merge two sorted
// arrays with O(1) extra space.
#include <bits/stdc++.h>
using namespace std;

// Merge ar1[] and ar2[] with O(1) extra space
void merge(int ar1[], int ar2[], int m, int n)
{
    int i = m - 1;
    int j = 0;
    while (i >= 0 && j < n)
    {
        if (ar1[i] >= ar2[j])
        {
            swap(ar1[i], ar2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(ar1, ar1 + m);
    sort(ar2, ar2 + n);
}

// Driver program
int main()
{
    int ar1[] = {1, 5, 9, 10, 15, 20};
    int ar2[] = {2, 3, 8, 13};
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n);

    cout << "After Merging First Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
        cout<<endl;
    cout << "Second Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}
