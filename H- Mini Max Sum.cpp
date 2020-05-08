#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5],i;
	
	for (i=0; i<5;i++){
		cin>> a[i];
	}
	
	int minNilai = a[0], maxNilai = a[0];
	long long sum=a[0];
	for (i=1; i<5;i++){
		minNilai = min(minNilai, a[i]);
		maxNilai = max(maxNilai, a[i]);
		sum += a[i];
	}
	
	cout<< sum- maxNilai <<" "<< sum-minNilai<<endl;
}
