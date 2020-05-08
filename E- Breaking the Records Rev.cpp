#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n,i, min=0, max=0, cmin=0, cmax=0;
	cin >>n;
	int score[n];
	
	for (i=0; i<n; i++){
		cin>> score[i];
	}
	
	for (i=0;i<n;i++){
		if (score[i]< min && score[i]>max){
			min = score[i];
			max = score[i];
		}
		else if (score[i]> max){
			max = score[i];
			cmax += 1;
		}
		else if (score[i]<min){
			min = score[i];
			cmin+= 1;
		}
	}
	
	cout<< cmin <<" "<< cmax;
}
	
