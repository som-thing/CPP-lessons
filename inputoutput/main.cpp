#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	string name;
	string age;
	string town;
	cout << "Enter your name, please: "<< endl;
	cin >> name;
	cout << "Enter your age, please: "<< endl;
	cin >> age;
	cout << "Where do you leave? "<< endl;
	cin >> town;
	cout << "So, you're " << name << ". You're "<< age << " years old. And you live in "<< town << "."<< endl;
	cout << "Thank you, have a good day, "<< name << "!";
	return 0;
}
