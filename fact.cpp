#include<iostream>
using namespace std ;
int fact(int n) {
	if(n<=1) {
		return 1;
	}
	else {
		return n*fact(n-1);
	}
}
int main() {
	while(true) {
		int a ;
		cin>>a;
		int ans = fact(a);
		cout<<ans<<endl;
	}
}

