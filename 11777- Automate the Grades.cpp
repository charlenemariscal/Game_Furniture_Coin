//11777 automate the grades
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int smt1,smt2,final,attend,tes,hasil;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>smt1>>smt2>>final>>attend;
		int nilai[3];
		for (int j=0;j<3;j++){
			cin>>nilai[j];
		}
		sort(nilai,nilai+3);
		
		tes = (nilai[1]+nilai[2])/2;
		
		hasil= smt1+smt2+final+attend+tes;
		
		if(hasil>=90) cout<<"Case "<<i<<": A\n";
		else if(hasil>=80) cout<<"Case "<<i<<": B\n";
		else if(hasil>=70) cout<<"Case "<<i<<": C\n";
		else if(hasil>=60) cout<<"Case "<<i<<": D\n";
		else if(hasil<60) cout<<"Case "<<i<<": F\n";
	}
	return 0;
}

