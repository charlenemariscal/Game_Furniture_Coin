//10370 above average
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int t,n;
	float sum,ave,percen;
	cin>>t;
	for (int i=1;i<=t;i++){
		cin>>n;
		int nilai[n];
		sum=0;
		for (int j=0;j<n;j++){
			cin>>nilai[j];
			sum +=nilai[j];
		}
		ave=0;
		ave = (float) sum/n;
		int count =0;
		for (int k=0;k<n;k++){
			if (nilai[k]>ave){
				count +=1;
			}
		}
		percen =0;
		percen = (float) count/n *100;
		cout<<fixed<<setprecision(3)<<percen<<"%\n";
	}	
	return 0;
}

