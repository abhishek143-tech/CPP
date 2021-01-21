#include <bits/stdc++.h>
using namespace std;
const int R = 4, C = 4;
void printSnakePattern(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < C; j++)
            {
                cout << mat[i][j] << " ";
            }
        }
        else
        {
            for (int j = C - 1; j >= 0; j--)
            {
                cout << mat[i][j] << " ";
            }
        }
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
    printSnakePattern(matrix);
    return 0;
}