//621 secret research
#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	string a;
	
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a;
		int leen = a.length();
		
		if (a=="1"||a=="4"||a=="78")
			cout<<"+\n";
		else if(a[leen-2]=='3' &&a[leen-1]=='5')
			cout<<"-\n";
		else if(a[0]=='9' &&a[leen-1]=='4')
			cout<<"*\n";	
		else if(a[0]=='1' &&a[1]=='9'&&a[2]=='0')
			cout<<"?\n";
	}	
}

