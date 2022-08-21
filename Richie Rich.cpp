#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int a,b,x;
	    cin>>a>>b>>x;
	    int money_gap = 0;
	    money_gap = (b-a) ;
	    int year = 0;
	    if (money_gap%x == 0) { year = money_gap/x ; }
	    else { year = money_gap/x + 1 ; }
	    
	    cout<< year <<endl;
	}
	return 0;
}

