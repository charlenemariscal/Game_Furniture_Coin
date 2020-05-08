#include <bits/stdc++.h>
using namespace std;
//10055- Hashmat the Brave Warrior

int main(){
	long long hash, musuh,diff;
	
	while (cin>>hash>>musuh){
		diff = musuh - hash;
		cout<< abs(diff)<<endl;
	}
}
