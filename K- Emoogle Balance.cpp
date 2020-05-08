#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=1,i,j=1,numb,pos=0,zer=0,balance;

	while (n !=0){
	cin>> n;
		for (i=0; i<n;i++){
			cin>> numb;
			if (numb>0){
				pos +=1;
			}else if (numb==0){
				zer +=1;
			}
		balance= pos-zer;
		
		
		}
		cout<<"Case "<<j<<": "<< balance<<endl;	
		j++;	
	}
}
