#include <bits/stdc++.h>
using namespace std;

int main(){
	int sweet, sour;
	cin>> sweet;
	cin>> sour;
	do {
		if (sweet + sour == 13)
			cout<<"Never speak again."<<endl;
		else{
			if (sour> sweet)
				cout<<"Left beehind."<<endl;
			else if (sweet> sour)
				cout<< "To the convention."<<endl;
			else if (sweet == sour)
				cout<<"Undecided."<<endl;
			else if (sweet + sour == 13)
				cout<<"Never speak again."<<endl;
		}
		cin>> sweet;
		cin>> sour;	
	}
	while (sweet !=0 && sour !=00);
	return 0;
}
