#include <iostream>
#include "AdvancedTasks1.h"

using namespace std;
using namespace Tasks;

int func(int val1, int val2){
	return (val1-val2);
}

int main(int argc, char** argv) {
	//bool result = isHeGonnaSurvive(4,3);
	//cout << result << endl;
	//string res2 = reversedStrings("world");
	//cout << res2;
	

	//int masssive[5] = {1,2,3,4,5};
	//int sum=0;
	//for(int i=0; i<5;i++){
	//	sum+=masssive[i];
	//}
	//int res=sum/5;
	//cout<<res;
	int health[5] = {50, 50, 50, 75, 100};
	int attack[5] = {55, 60, 75, 90, 125};
	bool res= allianceHelp(health, attack, 1000, 25);
	cout << res;
	
	
	return 0;
}
