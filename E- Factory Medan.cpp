#include <iostream>
using namespace std;

int main(){
	int a, m;
	cin>>a>> m;
//	a = a + a %m;
	if (a != 1){
		if (m % a!= 0){
			cout<< "No";
		}
		else{
			cout<< "Yes";
		}
	}
	else
		cout<<"No";
	return 0;	
}
