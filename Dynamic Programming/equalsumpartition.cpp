#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {1,2,3,4,5};
     int sum = accumulate(arr,arr+5,0);
    //accumulate function is used for the get the sum of all the elements in an array or vector.
     cout<<sum;
     return 0;
}