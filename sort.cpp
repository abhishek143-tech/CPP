#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n); //sorts given array
	    
	    for(int i=0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
	    
	    cout<<"\n";
	}
	return 0;
}