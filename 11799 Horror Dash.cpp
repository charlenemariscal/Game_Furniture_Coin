#include <iostream>
using namespace std;

int main(){
	int t, n, clown;
	
	cin>> t;
	for (int i=1; i<=t;i++){
		cin>>n;
		int speed[n];
		for (int j=1; j<=n; j++){
			cin>> speed[j];
		}
		
		clown = speed[1];
		for (int j=1; j<=n; j++){
			if (speed[j]<=clown)
				clown = clown;
			else if (speed[j]>clown)
				clown = speed[j];
		}
		cout<< "Case "<< i<<": "<<clown<<endl;
	}
	
	return 0;
}
