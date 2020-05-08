//12468 zapping
#include<iostream>
using namespace std;

int main(){
	int a,b,move,t;
	
	cin>>a>>b;
	while(a!=-1 && b!=-1){
		
		if(a>b){
			t =a;
			a =b;
			b =t;
		}
		if (b-a <=50)
			cout<< b-a<<endl;
		else
			cout<< (100-b)+a<<endl;			
		cin>>a>>b;
	}
	return 0;
}

