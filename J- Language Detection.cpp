#include <bits/stdc++.h>
using namespace std;

int main(){
	string text,lang;
	int i =1;
		while (text!= "#"){
			cin>> text;
			if (text == "HELLO"){
				lang = "ENGLISH";
			}else if (text == "HOLA"){
				lang = "SPANISH";
			}else if (text == "HALLO"){
				lang = "GERMAN";
			}else if (text == "BONJOUR"){
				lang = "FRENCH";
			}else if (text == "CIAO"){
				lang = "ITALIAN";
			}else if (text == "ZDRAVSTVUJTE"){
				lang = "RUSSIAN";
			}else{
				lang = "UNKNOWN";
			}if(text =="#"){
				break;
			}
			cout<< "Case "<<i <<": " << lang<< endl;
			i++;
		}
		
}
