//11715 car
#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int format;
	double u,v,t,s,a;
	
	cin>>format;
	int count=1;
	
	while(format !=0){
		
		if (format == 1){
			u=v=t=s=a=0;
			cin>>u>>v>>t;
			a = (double) ((v-u)/t);
			s = (double) ((u*t)+(0.5*a*t*t));
			cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<s<<" "<<a<<endl;
			count ++;
		}
		else if(format ==2){
			u=v=t=s=a=0;
			cin>>u>>v>>a;
			t = (double) ((v-u)/a);
			s = (double) ((u*t)+(0.5*a*t*t));
			cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<s<<" "<<t<<endl;
			count ++;
		}
		else if (format ==3){
			u=v=t=s=a=0;
			cin>>u>>a>>s;
			v = (double) (sqrt(u*u +(2*a*s)));
			t = (double) ((v-u)/a);
			cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<v<<" "<<t<<endl;
			count ++;
		}
		else if (format ==4){
			u=v=t=s=a=0;
			cin>>v>>a>>s;
			u = (double) (sqrt(v*v - (2*a*s)));
			t = (double) ((v-u)/a);
			cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<u<<" "<<t<<endl;
			count ++;
		}	
		cin>>format;
	}
	return 0;
}

