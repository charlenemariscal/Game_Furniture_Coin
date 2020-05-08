//11541 decoding
#include <iostream>
#include <string>
using namespace std;

int strconv(string a){
	int len = a.size();
	int count=0 ;
	for (int i=0;i<len;i++){
		if (a[i]=='1') count +=1;
		else if (a[i]=='2') count +=2;
		else if (a[i]=='3') count +=3;
		else if (a[i]=='4') count +=4;
		else if (a[i]=='5') count +=5;
		else if (a[i]=='6') count +=6;
		else if (a[i]=='7') count +=7;
		else if (a[i]=='8') count +=8;
		else if (a[i]=='9') count +=9;
		else if (a[i]=='0') count +=0;
		
		if (i != len-1) count *=10;
	}
	return count;
}

int main(){
	int n;
	string a;
	cin>> n;
	for (int i=1; i<=n;i++){
		cin>>a;
		int len = a.size();
		for (int j=0;j<len;j++){
			if (isdigit(a[i])){
				strconv(a[i]);
				if(isdigit(a[i+1])){
					int b= a[i]*10 + strconv(a[i+1])
					i++;
				}
				else{
					(for int k=1;k<=j[i];k++){
						cout<<j[i-1];
					}
				}
			}
		}
	}
	return 0;
}

