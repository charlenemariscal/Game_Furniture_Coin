//11461 square number
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b, count;
	
	cin>>a>>b;
	while(a!=0 && b!=0){
		count =0;
		for(int i=a; i<=b;i++){
			double c= (double) sqrt(i);
			
			if (floor(c) == ceil(c)){
				count +=1;
			}
		}
		cout<<count<<endl;
		cin>>a>>b;
	}
	return 0;
}

