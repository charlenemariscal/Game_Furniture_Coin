#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i, money=0,sum =0;
	string text;
	cin>>n;
	
	for (i=0; i<n; i++){
		cin>> text;
		if (text=="donate"){
			cin>>money;
			sum+= money;
		}else if (text == "report"){
			cout<< sum<<endl;
		}
	}
}
