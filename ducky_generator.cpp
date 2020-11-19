#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::cin;

void menu_options();
void help();
bool write_config();
void disk_clearer();
void check_current_file();
void delete_file();

std::ofstream testFile("test.ino");

int main(){
	if(testFile.fail()){
			cout << "File does not exist, creating it..." << endl;
			std::ofstream createMyFile("duck.ino");
			cout << "File created successfuly" << endl;
	}
	
	while (true){
		int res;
		cout << "Select what action do you want to perform: " << endl;
		menu_options();
		cout << ">> ";
		cin >> res;
		
		switch (res){
			case 0:
				help();
			case 1:
				disk_clearer();
				break;
			case 97:
				delete_file();
			case 98:
				check_current_file();
				break;
		}
		if (res == 99)
			break;
	}
	
	return 0;
}

void menu_options(){
	cout << "[0] help" << endl;
	cout << "[1] hard disk clear script" << endl;
	cout << "[97] delete current file" << endl;
	cout << "[98] check the current file" << endl;
	cout << "[99] exit" << endl;
}

void help(){
	cout << "For more help read the readme.me" << endl;
}

bool write_config(){	
	//This will be a future feature, but now this is not tested, so ingnore this
/*	std::ifstream json_file("config.json");
	json_file >> config;


	if (!config["warning"]){
		cout << config["message"] << '\n' << endl;
		cout << "The actual configuration is: " << config["warning"] << endl;
		cout << "\nIf you want to disable this message every time this app runs. For disabling it, type D (other character wont disbale this)" << endl;
		char res;
		cout << ">> ";
		cin >> res;
		
		if(res == 'D' || "d"){
			std::ofstream config["warning"] = "true";
			return true;
		}	
	}
	
	return false;
	*/
}

void disk_clearer(){
	testFile << "test" << endl;
	testFile.close();
}

void check_current_file(){
	char string[128];
	
	std::ifstream check_file("test.ino");
	
	while (!check_file.eof()){
		check_file >> string;
		cout << string << endl;
	}
	
	check_file.close();
}

void delete_file(){
	remove("test.ino");
	cout << "File removed successfully!" << endl;
}
