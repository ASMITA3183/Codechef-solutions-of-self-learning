#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        char x;
        cin>>x;
        if (x=='B' || x=='b') { cout<<"BattleShip"<<endl; }
        if (x=='C' || x=='c') { cout<<"Cruiser"<<endl; }
        if (x=='D' || x=='d') { cout<<"Destroyer"<<endl; }
        if (x=='F' || x=='f') { cout<<"Frigate"<<endl; }
        
        
    }
	// your code goes here
	return 0;
}

