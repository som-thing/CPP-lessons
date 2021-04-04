#include <iostream>
using namespace std;
#include "helper.h";
#include <time.h>

int randint(){
	srand(time(0));
	return rand() % 10;
}

bool proverka(int source[], int number){
	int lenght = sizeof(source) / sizeof(*source);
	bool out = false;
	for(int i = 0; i <= lenght; i++){
		if (number == source[i]){
			return true;
		}
	
	}
	return out;
}
