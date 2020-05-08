//A- Devu Churu
#include <bits/stdc++.h>
using namespace std;

int main(){
	int numbersong,timesong,eventtime,i,songtime,churutime;
	int temp = 0, devutime= 0, joke = 0;

	cin>> numbersong>>eventtime;

	for (i=1; i<= numbersong;i++){
		cin>> timesong;
		devutime += timesong+10;
		joke +=2;
	}
	devutime -=10;
	joke-=2;
	
	churutime = eventtime - devutime;
	
	if(churutime < 0){
		cout<< -1;
	}
	else{
		joke += (churutime /5);
		cout<<joke;
	}
}
