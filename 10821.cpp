//10821
#include<iostream>
using namespace std;

int main(){
	int t, sum, diff,timA,timB;
	
	cin >>t;
	for(int i=1; i<=t; i++){
		cin>>sum>>diff;
		
		bool result = false;
		timB=0;
		for (timA= sum; timA>=0; timA--){
			timB= sum-timA;
			
			if (timA-timB == diff){
				cout<< timA<<" "<<timB<<"\n";
				result = true;
				break;
			}
		}
		if (!result)
			cout<<"impossible\n";
	}
}

