#include <bits/stdc++.h>
using namespace std;
struct Interval
{
    int start, end;
};

bool compare(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

void mergeIntervals(Interval arr[], int n)
{
    if (n <= 0) // if there is no value in array
    {
        return;
    }
    stack<Interval> s;
    sort(arr,arr+n,compare);
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        Interval top = s.top();

        if (top.end < arr[i].start) //if we cannot merge two intervals since the ending time of first interval is not greater than or equal to the starting time of second interval
        {
            s.push(arr[i]);
        }else if(top.end<arr[i].end){ // in these case we can merge intervals we take starting time as the starting time of top element reason is it is smallest element and then we take the ending time as ending time of current element
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }

    while (!s.empty())
    {
        Interval t = s.top();
        cout<<"["<<t.start<<","<<t.end<<"] ";
        s.pop();
    }
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;
}