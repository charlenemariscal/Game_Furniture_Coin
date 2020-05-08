//11498
#include <iostream>
using namespace std;

int main(){
	int t, x,y, posx, posy;

	cin>>t;
	while(t !=0){
		cin >>x>>y;
	for (int i=1; i<= t;i++){
		
		cin>>posx>>posy;
		
		if (posx==x ||posy==y)
			cout<< "divisa\n";
		else if (posx> x &&posy> y)
			cout<< "NE\n";
		else if (posx> x &&posy< y)
			cout<< "SE\n";
		else if (posx< x &&posy> y)
			cout<< "NO\n";
		else if (posx< x &&posy< y)
			cout<< "SO\n";
		}
	cin>>t;		
	}
	return 0;
}

