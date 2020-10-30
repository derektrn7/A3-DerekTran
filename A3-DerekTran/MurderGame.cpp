/**************************************************
 Project: A3-DerekTran
 Lab Num: Assignment 3
 Author: Derek Tran
 Purpose: Main Class 
**************************************************/

#include "MurderGame.h"

void pause() {
	cout << "\n\n";
	system("pause");
}

void readTextFile(string fileName) {
	ifstream fileToRead(fileName);

	if (fileToRead.is_open()) {
		string line = "";
		while (!fileToRead.eof()) {
			getline(fileToRead, line);
			cout << line << "\n";
		}
	}
	else {
		cout << "\n		File Not Found.";
	}
	fileToRead.close();

};

string askForString(string question) {
	string userInput = "";
	cout << "\n" + question;
	getline(cin, userInput);

	while (userInput.length() <= 0) {
		cout << "You didn't seem to enter anything please try again: ";
		getline(cin, userInput);
	}

	return userInput;
}

void initialiseGame() {
	Player player;
	player.Player(askForString("Please enter your name: "));
}

void displayDescription() {
	readTextFile("murderMysteryDescription.txt");
	pause();
}

void displayTitle() {
	system("CLS");
	readTextFile("murderMysteryTitle.txt");
	pause();
}

void displayRules() {
	system("CLS");
	readTextFile("murderMysteryRules.txt");
	initialiseGame();
	pause();
}

void runMenu(){
	displayDescription();
	displayTitle();
	displayRules();
}

int main() {
	runMenu();
	pause();
	return 0;
}