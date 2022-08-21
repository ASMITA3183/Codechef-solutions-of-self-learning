#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int incre_weight = w2-w1;
        if ((incre_weight>=x1*m) && (incre_weight<=x2*m)) {
            cout<<"1"<<'\n';
        }
        else {
            cout<<"0"<<'\n';
        }
    }
	
	return 0;
}

