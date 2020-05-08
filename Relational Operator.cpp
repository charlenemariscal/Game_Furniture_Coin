#include <bits/stdc++.h>
using namespace std;
//11172- Realtional Operator
int main(){
	int t,a,b;
	cin>> t;
	for (int i =1; i<=t; i++){
		cin>>a>>b;
		
		if (a>b)
			cout<< ">\n";
		else if (a<b)
			cout<<"<\n";
		else if (a==b)
			cout << "=\n";
	}
	return 0;
}
