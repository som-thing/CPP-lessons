#include <iostream>
using namespace std;

#include "helper.h"


/* UwU */

int main(int argc, char** argv) 
{
	cout << "Hello, guess for digits\n";
	
	int randomDigits[4];
	
	for(int i = 0; i < 4; i++) {
		bool result = true;
		int chich;
		
		while (result==true){
				chich = randint();
				result = proverka(randomDigits, chich);
		
	}
	randomDigits[i]=chich;
	}
	
	bool success = false;
	
	while(success==false){
		
		string userInput;
		cin >> userInput;	
		
		int bully = 0;
		int cows = 0;
	
	
		for(int i = 0; i < 4; i++) {
			int converted = userInput[i] - '0';
			for(int j = 0; j < 4; j++){
				if (converted==randomDigits[j]){
					if (i==j){
						bully++;
					}else{
						cows++;
					}
				}
			}	
		} 
		cout<<"For try: "<<userInput<<". Cows: " << cows << ". Bulls: " << bully << endl;
		if (bully==4){
			success = true;
			cout<<"WOW, incredible!";
		}
	}
	return 0;
}
