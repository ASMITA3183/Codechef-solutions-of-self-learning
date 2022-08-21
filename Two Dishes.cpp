#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    int number_of_dishes = 0;
	    if (b>=a+c) { number_of_dishes = a+c ; }
	    else { number_of_dishes = b ; }
	    if (number_of_dishes>=n) { cout<<"YES"<<endl; }
	    else { cout<<"NO"<<endl; }
	}
	return 0;
}

