#include <iostream>
using namespace std;

int main(){
	int velo, time,distance;
	
	while(cin>>time>> velo){
		distance = time *velo*2;
		cout<< distance<<endl;
	}
	return 0;
}
