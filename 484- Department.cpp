//484 department
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
	vector <int> unik;
	vector <int> data;
	int n;
	ifstream f;
	f.open ("nama.txt");
	
	while(f>>n){
		data.push_back(n);
		
	}
	int lendata = data.size();
	int lenunik = unik.size();
	int byk =0;
		
	for(int i=0;i<lendata;i++){
		bool yunik=true;
		for(int j=0;j<byk;j++){
			if (data[i] == unik[j]){
				yunik = false;
				break;
				
			}
			
		}
		if (yunik){
			unik.push_back(data[i]);
			byk+=1;
		}
	}
	lenunik =unik.size();
	for(int i=0;i<lenunik;i++){
		int count =0;
		for (int j=0;j<lendata;j++){
			if (unik[i]==data[j]){
				count +=1;
			}}
		cout<< unik[i]<<" "<<count<<endl;
	}
	return 0;
}

