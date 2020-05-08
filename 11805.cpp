//11805
#include <iostream>
using namespace std;

int main(){
	int t,n,k,p;
	
	cin>>t;
	for (int i=1; i<= t; i++){
		cin>> n>>k>>p;
		
		for(int j =1; j<=p; j++){
			
			if (k==n)
				k=1;
			else
				k++;
		}
		cout<<"Case "<<i<<": "<<k<<endl;	
	}	
}

