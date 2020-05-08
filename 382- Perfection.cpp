//382 perfection
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	cout<<"PERFECTION OUTPUT\n";
	while(n!=0){
		int count =0;
		for (int i=1;i<n;i++){
			if (n%i==0){
				count +=i;
			}
		}
		
		if (count ==n){
			printf("%5d  ",n);
			cout<<"PERFECT\n";
		}
		else if (count <n){
			printf("%5d  ",n);
			cout<<"DEFICIENT\n";
		}
		else{
			printf("%5d  ",n);
			cout<<"ABUNDANT\n";
		}
		cin>>n;
	}	
	
	cout<<"END OF OUTPUT\n";
	return 0;
}

