//10783 ODD NUMBER
#include<iostream>
using namespace std;

int main(){
	int n, a, b,total;
	
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a>>b;
		total =0;
		for (int j=a; j<=b;j++){
			if (j%2 ==1){
				total +=j;
			}
		}
		cout<<"Case "<<i<<": "<< total<<endl;
	}
	return 0;
}

