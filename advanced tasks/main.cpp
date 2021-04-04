#include <iostream>
#include "helper.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int health[5] = {50, 50, 50, 75, 100};
	int attack[5] = {40, 45, 80, 60, 110};
	allianceHelp(health, attack, 300, 10);
		
	return 0;
}
