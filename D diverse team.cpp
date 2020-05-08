//D Diverse team
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, tim;
	
	cin>>n>>tim;
	int angka[n];
	for(int i=0;i<n;i++){
		cin>>angka[i];
	}
	for(int i=0;i<n;i++){
		cout<<angka[i]<<" ";
	}
	vector <int> beda;
	vector <int> idx;
	int byk = idx.size();
	byk =0;
	
	for (int j=0;j<n;j++){
		for (int k=0;k<byk;k++){
			if (angka[j] != beda[k]){
				beda.push_back(angka[j]);
				idx.push_back(j+1);
				byk++;
			}
			else{
				break;
			}
		}
	}
	
	int panjang = beda.size();
	
	if(panjang==tim){
		cout<<"YES\n";
		for(int l=0;l<byk;l++)
			if(l !=byk-1)
				cout<<idx[l]<<" ";
			else
				cout<<idx[l];
	}
	else
		cout<<"NO"<<endl;
	
	return 0;
}

