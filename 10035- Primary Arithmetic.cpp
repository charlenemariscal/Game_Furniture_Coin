//10035 arithmetic
#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	int count,carry,sisa=0;
	
	cin>>a>>b;
	
	
	while(a !="0" && b!="0"){
		carry =0;
		int lena= a.size()-1;
		int lenb= b.size()-1;
		int count =0;
		sisa =0;
		for(int i=lena;i>=0;i--){
			for (int j =lenb; j>=0;j--){
				if (a[i]=='1'){count +=1;
					count +=sisa;
					 
				}
				else if(a[i]='2'){count +=2;
					count +=sisa;
					
				}
				else if(a[i]='3'){count +=3;
					count +=sisa;
					
				}
				else if(a[i]='4'){count +=4;
					count +=sisa;
					
				}
				else if(a[i]='5'){count +=5;
					count +=sisa;
					
				}
				else if(a[i]='6'){count +=6;
					count +=sisa;
					
				}
				else if(a[i]='7'){count +=7;
					count +=sisa;
					
				}
				else if(a[i]='8'){count +=8;
					count +=sisa;
					
				}
				else if(a[i]='9'){count +=9;
					count +=sisa;
					
				}
				else if(a[i]='0'){count +=0;
					count +=sisa;
					
				}
				
				if (b[j]=='1'){
					count +=1;
				}
				else if(b[j]='2'){
					count +=2;
				}
				else if(b[j]='3'){
					count +=3;
				}
				else if(b[j]='4'){
					count +=4;
				}
				else if(b[j]='5'){
					count +=5;
				}
				else if(b[j]='6'){
					count +=6;
				}
				else if(b[j]='7'){
					count +=7;
				}
				else if(b[j]='8'){
					count +=8;
				}
				else if(b[j]='9'){
					count +=9;
				}
				else if(b[j]='0'){
					count +=0;
				}
				
				cout<<count<<endl<<carry<<endl;
				
				sisa =0;
				if(count >=10){
					carry ++;
					if(count==10)
						sisa=1;
					else
						sisa = count %10;
				}
				else
					carry +=0;
			}		
		}
			if (carry ==0){
				cout<<"No carry operation.\n";
				}
			else if (carry ==1){
				cout<<"1 carry operation.\n";
				}
			else
				cout<<carry<<" carry operations.\n";
	cin>>a>>b;	
	}
	
		
	return 0;
}
