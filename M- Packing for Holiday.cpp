#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i, L=0,W=0,H=0;
	cin>> n;
	
	for (i=0; i<n; i++){
		cin>> L>> W>>H;
		if (L<=20 && W<=20 && H<= 20){
			cout<< "Case "<< i+1<< ": "<< "good"<<endl;
		}
		else{
			cout<< "Case "<< i+1 <<": "<< "bad"<<endl;
		}
	}
	return 0;
}
