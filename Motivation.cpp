#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n>>x;
	    int arr[2*n];
	    for(int i=0 ; i <2*n ; i++) {
	        cin>>arr[i];
	    }
	    int max = 0;
	    for(int i =0 ; i < 2*n ; i++) {
	        if (i%2 == 0 && arr[i]<=x ) {
	            if (max <= arr[i+1]) { max  = arr[i+1] ; }
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}

