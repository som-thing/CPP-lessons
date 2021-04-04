#include "AdvancedTasks1.h"
#include <iostream>
#include <time.h>
using namespace std;

int Tasks::average(int source[]){
	
}




/*
В некотором мире живут герои и драконы, на то, чтобы убить дракона - нужно две пули.
Напишите функцию, которая принимает на вход количество патронов героя и количество драконов с которым ему предстоит встретиться.
И возвраащает знаачение true - если при встрече с драконами герой остаанется жив и false, если умрет.
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
Напишите функцию которая делает инверсию строки
world => dlrow
*/
string Tasks::reversedStrings(string source) {
	for(int x=source.size()-1; x>=0; x--){
        cout << source[x];
    }
}





/*
Верните первый повторяющийся элемент в массиве, если таких нет - то верните -1
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
Вы - командир отряда солдат альянса. Возвращаетесь с отрядом домой.
По дороге встречаете монстра, убив его вы сделаете земли безопаснее. Но вы не можете терять солдат.
Равездка сообщиала вам о количестве здоровья и силе удара монстра.
Зная параметры ваших солдат, вам нужно посчитать сможете ли вы победить без потерь.
----------------
Усложненный вариант посчитать с какими минимальными потерями можно победить монстра
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







