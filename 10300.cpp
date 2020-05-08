//10300
#include<iostream>
using namespace std;

int main(){
	int n,f,size,animal,envi,burden;
	
	while(cin>>n){
		for(int i=1; i<=n; i++){
			cin>>f;
			burden = 0;
			for(int j=1; j<=f;j++){
				cin>>size>>animal>>envi;
				burden+=(size*envi);
			}
		cout<<burden<<endl;	
		}
		
	}
	return 0;
}

