#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[n], i,type1=0,type2=0,type3=0,type4=0,type5=0;
	cin>> n;
	
	for (i=0; i<n;i++){
		cin>> a[i];
		
		if (a[i]==1){
			type1 +=1;
		}
		else if (a[i]==2){
			type2 += 1;
		}else if (a[i]==3){
			type3 += 1;
		}else if (a[i]==4){
			type4 += 1;
		}else if (a[i]==5){
			type5 += 1;
		}
	}
	
	int lista[5]=[type1, type2, type3, type4, type5];
	sort(lista,lista+5);
	
	cout<< lista[0];
}
