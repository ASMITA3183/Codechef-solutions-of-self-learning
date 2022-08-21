#include <iostream>

#define el endl ;
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--) {
         int a,b;
         cin>>a>>b;
         if(a<b) { cout<<"<"<<el; }
         if(a>b) { cout<<">"<<el; }
         if(a==b){ cout<<"="<<el; }
     }
	// your code goes here
	return 0;
}

