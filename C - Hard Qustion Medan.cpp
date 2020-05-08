#include <iostream>
using namespace std;

int main(){
	int t, x, y,z;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>> y>>x;
		z = y*100/(100+x);
		cout<< z<<endl;
	}
}
