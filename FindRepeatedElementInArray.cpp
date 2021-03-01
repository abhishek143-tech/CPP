#include <bits/stdc++.h>
using namespace std;
int main()
{

     int arr[] = {0, 4, 3, 2, 7, 8, 2, 3, 1};
     int n = sizeof(arr) / sizeof(arr[0]);
     for (int i = 0; i < n; i++) //
     {
          arr[arr[i] % n] += n;// we simply go to the index of element % size and increment it by size 
     }

     for (int i = 0; i < n; i++) // since the repeated elements have the values greater than the 2*n becuase they are incremented twice
     {
          if (arr[i] >= 2 * n)
          {
               cout << i << " ";
          }
     }

     return 0;
}
