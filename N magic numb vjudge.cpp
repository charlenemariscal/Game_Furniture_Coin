//N magic number
#include <iostream>
#include<string>
using namespace std;

int main(){
	string numb;
	cin>>numb;
	
	bool status =false;
	int len = numb.size();
	
	for(int i=0;i<=len;i++){
		if(numb[i]=='1'){
			status = true;
			if(numb[i+1]=='4'){
				status =true;
				if (numb[i+2]=='4'){
					status = true;
				}
				else
					continue;
			}
			else
				continue;
		}
		else
			status = false;
	}
	if(numb=="144"||numb =="514"||numb=="414"){
			status =false;
		}
	
	if(status == true)
		cout<<"YES";
	else
		cout<<"NO";
	
	
	return 0;
}
