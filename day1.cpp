#include<iostream>
using namespace std;

void reverse(int arr[],int start, int end) {
    for(int i=start,j=end-1;i<start+(end-start)/2;i++,j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n, d;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    
	    reverse(arr,0,d);
	    reverse(arr,d,n);
	    reverse(arr,0,n);
	    
	    for(int i=0;i<n;i++)
	        cout<<arr[i]<<" ";
	    
	    cout<<endl;
	}
	return 0;
}