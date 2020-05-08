//11364
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t,n,dis;
	cin>>t;
	for (int i=1; i<=t; i++){
		cin>>n;
		int pos[n];
		for(int j=0; j<n; j++){
			cin >>pos[j];
		}
		
		sort(pos, pos+n);
		dis = (pos[n-1]-pos[0]) *2;
		cout<< dis<<endl;
	}
	return 0;
}

