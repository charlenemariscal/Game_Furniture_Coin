#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,i;
	string hasil;
	cin>>n;
	
	for (i=0; i<n; i++){
		cin>> a;
		cin>> b;
		
		if (a == b){
			hasil= "=";
		}
		else if (a>b){
			hasil= ">";
		}
		else{
			hasil= "<";
		}
	cout<< hasil<< endl;
	}
}
