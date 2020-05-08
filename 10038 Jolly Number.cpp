#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	
	while (cin>> n){
		int numb[n];
		for (int i=0;i<n;i++){
			cin>>numb[i];
		}
		int diff[n-1];
		
		for (int j=0; j<n-1;j++){
			diff[j]= abs(numb[j]-numb[j+1]);
		}
		
		bool status = 1;
		for (int j=0;j<n-1;j++){
			if (abs(diff[j]-diff[j+1])==1)
				status = 1;
			else
				status = 0;
		}
		
		if (status == 1)
			cout<<"Jolly\n";
		else
			cout<<"Not jolly\n";
	}
	return 0;
}

