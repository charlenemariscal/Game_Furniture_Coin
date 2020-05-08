//10107 what is the median
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,med,val;
	vector <int> data;
	
	while (cin>>n){
		data.push_back(n);
		sort(data.begin(), data.end());
		int size = data.size();
		
		if(size==2){
			val = (data[0]+data[1])/2;
			cout<< val<<endl;
			val=0;
		}
		else{
			if (size %2==1){
				med = size/2;
				cout<< data[med]<<endl;
				med=0;
			}
			else if (size%2==0){
				med = size/2;
				val = (data[med]+data[med-1])/2;
				cout<< val<<endl;
				val=0; med=0;
			}
		}
	}
	return 0;
}

