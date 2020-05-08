#include <bits/stdc++.h>
using namespace std;

int main(){
	string name,title;
	
	int i=1;
	cin>> name;
	while (name != "*"){
		
		if (name=="Hajj"){
			title = "Hajj-e-Akbar";
		}
		else if (name =="Umrah"){
			title = "Hajj-e-Asghar";
		}else if (name == "*"){
			break;
		}
	cout<< "Case "<<i<< ": "<< title<< endl; 
	i++;
	cin>> name;
	}
	return 0;
}
