/**************************************************
 Project: A3-DerekTran
 Lab Num: Assignment 3
 Author: Derek Tran
 Purpose: Location Header
**************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "Suspect.cpp"
#include "Item.cpp"
#pragma once

using namespace std;
using std::vector;

class Location{
public:
	//Constructors
	Location(string name);
	void locationCondition(string condition);
	void locationSuspects(Suspect);
	void locationItems(Item);
	void locationMurder(bool murder);
	//Accessor Functions
	string getName();
	string getCondition();
	vector<string> getSuspects();
	vector<string> getItems();
	bool getIfMurder();
	//Mutator Functions
	void addSuspect(Suspect);
	void removeSuspect(Suspect);
	void addItem(Item);
	void removeItem(Item);

private:
	//Variables
	string locationName;
	string locationCondition;
	vector<Suspect> locationSuspects;
	vector<Item> locationItems;
	bool locationMurder;
};

