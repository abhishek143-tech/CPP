#include <bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};
struct Pair getMinMax(int arr[],int n){ //struct Pair is return type getminmax is function name
    struct Pair minmax;
    int i;
    if(n==1){
        //corner case
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    if(arr[0]>arr[1]){//if there are two elements
        minmax.min = arr[1];
        minmax.max = arr[0];
        
    }else{
        minmax.min = arr[0];
        minmax.max = arr[1];
        
    }
    for (int i = 2; i < n; i++)//if there are more than two elements in an array
    {
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }else if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
    }
    return minmax;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1000, 11, 445,
                 1, 330, 3000};
    int arr_size = 6;

    struct Pair minmax = getMinMax(arr, arr_size);

    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
    return 0;
}