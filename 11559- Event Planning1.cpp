//Event planning
#include <iostream>
using namespace std;

int main(){
	int partc, budget, hotel, week;
	
	while(cin>>partc>>budget>>hotel>>week){
		int price,bed,lowest=budget;	
		bool budget = false;
	
		for(int i=0; i<hotel;i++){
			cin>>price;
			
			for(int j=0; j<week; j++){
				cin>>bed;
				if (partc<bed && partc*price<lowest){
					lowest = partc*price;
					budget =true;
				}	
			}
		}
		if (budget){
			cout<<lowest<<endl;
		}
		else
			cout<<"stay home\n";		
	}
	return 0;
}

