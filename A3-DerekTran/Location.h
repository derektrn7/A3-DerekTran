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
#pragma once

using namespace std;
using std::vector;

class Location{
public:

private:
	//Variables
	string locationName;
	string locationCondition;
	vector<Suspect> locationSuspects;
	vector<item> locationItems;
	bool locationMurder;
};

