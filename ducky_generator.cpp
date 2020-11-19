#include <iostream>
#include <fstream>
using namespace std;

void menu_options();
void help();

int main(){
	int res;
	
	ifstream testFile("duck.ino");
	
	if(testFile.fail()){
			cout << "File does not exist, creating it..." << endl;
			ofstream createMyFile("duck.ino");
			cout << "File created successfuly" << endl;
	}
	
	cout << "Select what action do you want to perform: " << endl;
	menu_options();
	cout << ">> ";
	cin >> res;
	
	switch (res){
		case 1:
			break;
		case 99:
			help();
	}
	
	return 0;
}

void menu_options(){
	cout << "[1] hard disk clear script" << endl;
	cout << "[99] help" << endl;
}

void help(){
	
}
