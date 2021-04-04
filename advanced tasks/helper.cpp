#include <iostream>
#include <cstdlib>
#include <time.h>
#include "helper.h"
#include <windows.h>
using namespace std;

int randint(){
	int output = rand() % 5;
	return output;
}

bool allianceHelp(int soldiersHealth[], int soldiersAttack[], int monsterHealth, int monsterAttack){

	int rand;
	int round=0;
	srand(time(0));
	
	
	bool nobodydied = true;
	while(nobodydied == true){
		round+=1;
		cout << "ROUND " << round << endl;
		rand = randint();
		monsterHealth-=soldiersAttack[rand];
		cout << "Soldier " << rand+1 << " attacked monster for " << soldiersAttack[rand] << " HP." << endl;
		if(monsterHealth <= 0){
			cout << "YOU WON! Monster is dead!" << endl;
			return true;
		}		
		soldiersHealth[rand]-=monsterAttack;
		cout << "Monster attacked soldier " << rand+1 << " for " << monsterAttack << " HP." << endl;
		if(soldiersHealth[rand]<=0){
			cout << "Soldier " << rand+1 << " fainted!" << endl;
			cout << "YOU LOST!" << endl;
			break;
		}
		cout << "Monster HP: " << monsterHealth << endl;
		cout << "Soldiers HP: ";
		for(int i = 0; i < 5; i++){
			if (i!=4){
			cout << soldiersHealth[i] << ", ";
			}
			else{
				cout << soldiersHealth[i] << "."<< endl;
			}
		}
	}
	return false;
}
