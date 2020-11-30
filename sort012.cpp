#include <iostream>
using namespace std;
void sort012(int arr[], int n)
{
    int count_0 = 0;
    int count_2 = 0;
    int count_1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        if (arr[i] == 1)
        {
            count_1++;
        }
        if (arr[i] == 2)
        {
            count_2++;
        }
    }

    while (count_0--)
    {
        cout << "0"
             << " ";
    }
    while (count_1--)
    {
        cout << "1"
             << " ";
    }
    while (count_2--)
    {
        cout << "2"
             << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    sort012(arr,n);
    }
    return 0;
}