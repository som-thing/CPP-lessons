#include <iostream>
#include "helper.h"
using namespace std;

bool palindrom(string source){
	string noprobel="";
	for (int i=0; i<source.length(); i++){
		if (source[i]!= 32){
			noprobel+= source[i];
		}
	}
	
	string reverse="";
	for(int i = noprobel.length()-1; i>=0; i--){
		reverse+=noprobel[i];
	}

	
	if (noprobel==reverse){
		return true;
	}
	return false;
}
