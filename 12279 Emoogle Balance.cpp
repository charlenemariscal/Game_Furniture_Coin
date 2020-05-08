#include<iostream>
using namespace std;

int main(){
	int n, j=1, treat, given, balance;

	while (cin>>n){
		if (n!=0){
			int event [n];
			treat =0;
			given =0;
			for (int i=0; i< n; i++){
					cin>> event[i];
					
					if (event[i] == 0)
						given +=1;
					else if (event[i] >0)
						treat +=1;
						
				balance = treat - given;
				}
			cout<<"Case "<<j<<": "<< balance<<endl;	
			j++;
		}
		else
			break;
	}
	return 0;
}
