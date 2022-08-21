#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float incresed_price = s*c / 100 ;
	    
	    //cout<<incresed_price<<endl;
	    float total_price = s + incresed_price ;
	    //cout<<total_price<<endl;
	    if ((total_price>=a) && (total_price<=b)) {
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

