#include "AdvancedTasks1.h"
#include <iostream>
#include <time.h>
using namespace std;

int Tasks::average(int source[]){
	
}




/*
� ��������� ���� ����� ����� � �������, �� ��, ����� ����� ������� - ����� ��� ����.
�������� �������, ������� ��������� �� ���� ���������� �������� ����� � ���������� �������� � ������� ��� ��������� �����������.
� ����������� ��������� true - ���� ��� ������� � ��������� ����� ���������� ��� � false, ���� �����.
*/
bool Tasks::isHeGonnaSurvive(int bullets, int dragons) {
	if (bullets>=dragons*2){
		return true;
	}
	else{
		return false;
	}
}





/*
�������� ������� ������� ������ �������� ������
world => dlrow
*/
string Tasks::reversedStrings(string source) {
	for(int x=source.size()-1; x>=0; x--){
        cout << source[x];
    }
}





/*
������� ������ ������������� ������� � �������, ���� ����� ��� - �� ������� -1
[1,2,3,6,7,1] -> 1
[5,6,7,90,6] -> 6
[4,5,6,7,90,67,7,4] -> 7
*/
int Tasks::returnDubElement(int source[]) {
	
	return -1;
}	

int Tasks::randint(int len){
	srand(time(0));
	return rand() % (len);
}

/*
�� - �������� ������ ������ �������. ������������� � ������� �����.
�� ������ ���������� �������, ���� ��� �� �������� ����� ����������. �� �� �� ������ ������ ������.
�������� ��������� ��� � ���������� �������� � ���� ����� �������.
���� ��������� ����� ������, ��� ����� ��������� ������� �� �� �������� ��� ������.
----------------
����������� ������� ��������� � ������ ������������ �������� ����� �������� �������
*/
bool Tasks::allianceHelp(int soldiersHealth[], int soldiersAttack[], int monsterHealth, int monsterAttack) {
	cout<< "how many soldiers?" << endl;
	int length;
	cin>>length;
	int rand;
	
	bool nobodydied=true;	
	while(nobodydied=true){
		rand=randint(length);
		if (monsterHealth <= 0){
			return true;
		}
		monsterHealth-soldiersAttack[rand];
		soldiersHealth[rand]-monsterAttack;
		if (soldiersHealth[rand]<=0){
			nobodydied=false;
		}	
	}
	return false;
}







