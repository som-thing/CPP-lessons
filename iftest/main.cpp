#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	string month;
	cout<< "What month?" << endl;
	cin>>month;
	int convR= stoi(month);
	if (convR>2 && convR<6){
		cout << "EEEE springgg";
	}
	else if (convR>5 && convR<9 ){
		cout << "Nyahaha summer";
	}
	else if (convR>8 && convR<12 ){
		cout << "uuu autumn";
	}
	else {
		cout << "OOOH...winter...";
	}
	return 0;
}
