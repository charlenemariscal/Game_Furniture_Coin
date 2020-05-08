//11547 auto ans
#include<iostream>
#include <math.h>
using namespace std;

int main(){
	long long a,sum;
	int t;
	cin >>t;
	for(int i=1;i<=t;i++){
		cin>>a;
		sum = abs((((((a*567)/9)+7492)*235/47)-498));
		sum= (sum%100)/10;
		cout<<sum<<endl;
	}
	return 0;
}

