#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int t, n, a, s, count;
	float m;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n >> m;
		s = ceil(n*m);
		count = 0;
		for (int j = 0 ; j < n; j++){
			cin >> a;
			if (a >= 50){
				count ++;
			}
		}
		if (count < s){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}
