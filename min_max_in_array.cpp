#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    //int i;
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main()
{
    int arr[] = {1, 20, 38, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Pair minmax = getMinMax(arr, n);
    cout<<minmax.max<<endl;
    cout<<minmax.min<<endl;
    return 0;
}