//12289
#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	string a;
	
	cin>>t;
	for(int i=1; i<=t; i++){
		cin>>a;
		int leen = a.length();
		
		if (leen == 3){
			if(a[0]=='o'&&a[1]=='n'||a[0]=='o'&&a[2]=='e'||a[1]=='n'&&a[2]=='e')
				cout<<"1\n";
			else if (a[0]=='t'&&a[1]=='w'||a[0]=='t'&&a[2]=='o'||a[1]=='w'&&a[2]=='o')
				cout<<"2\n";
			else if (a[0]=='s'&&a[1]=='i'||a[0]=='s'&&a[2]=='x'||a[1]=='i'&&a[2]=='x')
				cout<<"6\n";
			else if (a[0]=='t'&&a[1]=='e'||a[0]=='t'&&a[2]=='n'||a[1]=='e'&&a[2]=='n')
				cout<<"10\n";
		}
		else if (leen == 4){
			if((a[0]=='f'&&a[1]=='o'||a[2]=='u'||a[3]=='r')||a[1]=='o'||a[2]=='u'||a[3]=='r')
				cout<<"4\n";
			else if (a[0]=='f'||a[1]=='i'||a[2]=='v'||a[3]=='e')
				cout<<"5\n";
			else if (a[0]=='n'||a[1]=='i'||a[2]=='n'||a[3]=='e')
				cout<<"9\n";
		}
		else if (leen == 5){
			if((a[0]=='t')||a[1]=='h'||a[2]=='r'||(a[3]=='e'&&a[0]=='t'||a[1]=='h'||a[2]=='r'||a[4]=='e')||a[4]=='e')
				cout<<"3\n";
			else if (a[0]=='s'||a[1]=='e'||a[2]=='v'||(a[3]=='e'&& a[0]=='s'||a[1]=='e'||a[2]=='v'||a[4]=='n')||a[4]=='n')
				cout<<"7\n";
			else if (a[0]=='e'||a[1]=='i'||a[2]=='g'||a[3]=='h'||a[4]=='t')
				cout<<"8\n";
		}
	}
	return 0;
}

