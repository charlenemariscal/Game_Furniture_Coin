//11942
#include <iostream>
using namespace std;

int main(){
	int t, n[10];
	bool status =1;
	
	cin>>t;
	cout<<"Lumberjacks:\n";
	for (int i=1; i<=t;i++){
		for (int j=0;j<10;j++){
			cin>>n[j];
		}
		if(n[0]>n[1]){
			for (int j=1;j<9;j++){
				if(n[j]>n[j+1])
					status =1;
				else{
					status =0;
					break;
				}
			}
		}
		if(n[0]<n[1]){
			for (int j=1;j<9;j++){
				if(n[j]<n[j+1])
					status =1;
				else{
					status =0;
					break;	
				}			
			}
		}	
	if (status == 1)
			cout<<"Ordered\n";
		else
			cout<<"Unordered\n";	
	}return 0;
}

