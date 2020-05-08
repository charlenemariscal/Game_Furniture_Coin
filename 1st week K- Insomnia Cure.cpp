//1st week k- insomnia cure
#include <bits/stdc++.h>
using namespace std;

int main(){
	int k,l,m,n,d;
	int damaged;
	cin>>k>>l>>m>>n>>d;
	
	for(int i=1; i<=d;i++){
		if (i%k ==0|| i%l ==0||i%m ==0||i%n ==0){
			damaged +=1;
		}
		else{
			damaged = 0;
		}
	}
	cout<<damaged;
}
