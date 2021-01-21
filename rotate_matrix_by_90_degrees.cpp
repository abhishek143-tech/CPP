#include <bits/stdc++.h>
using namespace std;
const int R = 4, C = 4;
void printTranpose(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = i+1; j < R; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i = 0; i < R; i++)
    {
        int low = 0, high = R - 1;
        while (low < high)
        {
            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
        }
    }
}

void printMatrix(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int matrix[C][R] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    printTranpose(matrix);
    printMatrix(matrix);
    return 0;
}