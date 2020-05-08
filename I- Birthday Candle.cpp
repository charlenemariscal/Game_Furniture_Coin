#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>> n;
	int a[n],i,tinggi= a[0], candle=0;
	
	for (i=0; i <n; i++){
		cin>> a[i];
	}
	sort(a,a+n,greater<int>());
	
	for (i=0; i<n;i++){
		if (a[i]==a[0]){
			candle += 1;
		}	
	}
	cout<<candle;
}
