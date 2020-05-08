#include <iostream>
using namespace std;

int main(){
	int t,n, low, high;
	
	cin>> t;
	for (int i =1; i<=t; i++){
		cin >>n;
		int height[n];
		for (int j=0;j< n; j++){
			cin >>height[j];
			}
		
		high =0;
		low = 0;
		for (int j=0;j< n-1; j++){
			if (height[j]<height[j+1]){
				high +=1;
				low =low;
			}
			else if (height[j+1]<height[j]){
				low +=1;
				high = high;
				}
			else if(height[j]==height[j+1]){
				high = high;
				low = low;
			}
			else{
				high =0;
				low =0;
			}
				
			
			
		}
		cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
	}
	return 0;
}
