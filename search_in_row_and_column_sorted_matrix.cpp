#include <bits/stdc++.h>
using namespace std;

const int R = 4, C = 4;

void search_in_sorted_matrix(int mat[R][C], int ele)
{
    int i = 0, j = C - 1;
    if (ele < mat[0][0] || ele > mat[R - 1][C - 1])
    {
        cout << "Not found" << endl;
        return;
    }
    while (i < R && j >= 0)
    {
        if (mat[i][j] == ele)
        {
            cout << "found at index %d and %d " << i << " " << j << endl;
            return;
        }
        else if (mat[i][j] > ele)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "Not found" << endl;
}
int main()
{
    int arr[R][C] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    search_in_sorted_matrix(arr, 15);

    return 0;
}