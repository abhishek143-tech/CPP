// C++ program to solve chocolate distribution
// problem
#include <bits/stdc++.h>
using namespace std;


int findMinDiff(int arr[], int n, int m)
{
	if(n==0 || m==0){
		return 0;
	}
	sort(arr,arr+n);
	if(n<m){
		return -1;
	}
	int min = INT_MAX;
	int curr_min;
	for (int i = 0; i+m-1<n; i++)
	{
		curr_min = arr[i+m-1]-arr[i];
		if(curr_min<min){
			min = curr_min;
		}
	}
	return min;
	
}

int main()
{
	int arr[] = {3,4,1,9,56,7,9,12};
	int m = 5; // Number of students
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum difference is "
		<< findMinDiff(arr, n, m);
	return 0;
}
