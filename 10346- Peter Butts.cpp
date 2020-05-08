//10346 peters butts
#include<iostream>
using namespace std;

int main(){
	int n,k,recy,sum,sisa;
	
	while(cin>>n>>k){
		sum=n;
		
		while (n>=k){
			recy = n/k;
			sisa = n-(recy*k);
			
			n=recy+sisa;
			
			sum += recy;
		}
	cout<<sum<<endl;
	}
	return 0;
}

