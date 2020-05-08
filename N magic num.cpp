//N Magic Numbers
#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cin>>a;
	int len =a.length();
	
	bool status =false;
	for(int i=0;i<len;i++){
		
		if (a[i]=='1'&& a[i+1]=='4'&& a[i+2]=='4'){
			status = true;
		//	i+=2;
			break;
		}
		else if (a[i]=='1'&& a[i+1]=='4'){
			status = true;
	//		i +=1;
			break;
		}	
		else if (a[i]=='1'){
			status =true;
			break;
		}	
		else
			status =false;
			break;
	}
	
	if(status == true){
		cout<<"YES"<<endl;
	}
	else 
		cout<<"NO"<<endl;
	
	return 0;
}
