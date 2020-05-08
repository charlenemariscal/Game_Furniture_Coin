#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n, i, nilai,sisa;
	cin>> n;
	for (i=0; i<n; i++){
		cin>> nilai;
		sisa = nilai % 5;
		if (sisa > 2 && nilai>35){
			nilai += 5-sisa;
			cout<< nilai<<endl;
		}else if (sisa<=2 && nilai >35){
			nilai = nilai;
			cout<<nilai<< endl;
		}else{
			nilai= nilai;
			cout<< nilai<< endl;
		}
		}
		
	}
