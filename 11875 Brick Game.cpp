#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n, capt;
	cin >>t;
	
	for(int i=1; i<=t; i++){
		cin>> n;
		
		int age[n];
		for (int j=1; j<= n; j++){
			
			cin>> age[j];
		}
		
		capt = age[(n/2)+1];
		cout<< "Case "<< i<<": "<<capt<<endl;
	}
	
}
