 //11984 suhu
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 int main(){
 	double t,c,f;
 	float conver,final;
 	
 	cin>>t;
 	for(int i=1;i<=t;i++){
 		cin>>c>>f;
 		
 		conver= c*9/5 +32;
 		conver +=f;
 		
 		final = (conver -32)*5/9;
 		cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<final<<endl;
	 }
 	return 0;
 }

