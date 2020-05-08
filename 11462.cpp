//11462
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	
	cin>>t; 
	while(t!=0){
		int age[t];
		for(int i=0;i<t;i++){
			cin>>age[i];
		}
		
		sort(age,age+t);
		
		for(int i=0;i<t;i++){
			if(i!= t-1)
				cout<<age[i]<<" ";
			else
				cout<<age[i]<<endl;
		}	
		cin>>t;
	}
	
	return 0 ;
}

