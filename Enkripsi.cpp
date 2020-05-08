//Enkripsi== penyajian
#include <bits/stdc++.h>
using namespace std;

//a=97 z=122 diganti a= 219-97= 122

int main(){
	char st[50];
	bool status = true;
	cin.getline(st,50);
	for (int i=0; i<strlen(st);i++){
		if (st[i]=='(' && st[i+1]=='\''){
			status != status;
		}
		else if (st[i]=='\'' && st[i+1]==')'){
			status != status;
		}
		if (st[i]>='a' && st[i]<='z' && status) st[i]=219-st[i];
	}
	cout<< st<<endl;
	return 0;
}
