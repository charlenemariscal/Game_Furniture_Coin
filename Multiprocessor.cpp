#include<bits/stdc++.h>
using namespace std;

int main(){
	int i=1, n, jcpu, job, jdata;
	cin>>n;
	for (i;i<n+1;i++){
		cin>> jdata>>jcpu;
		for (int x=0; x<jcpu;x++){
			cin>>job;
			int cpu[jcpu];
			cpu[0] += job;
			
			
			
			cout<< "Case #"<<i<< ": "<<cpu[jcpu-1]<<endl;	
			}
			
		}
	}
