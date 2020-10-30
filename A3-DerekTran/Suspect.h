/**************************************************
 Project: A3-DerekTran
 Lab Num: Assignment 3
 Author: Derek Tran
 Purpose: Suspect Header
**************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#pragma once

using namespace std;
using std::vector;

class Suspect{
public:
	//Constructors
	Suspect(string name);
	void setSuspectRole(string item);
    void setSuspectAlibi(string item);
	void ifMurder(bool murder);
	//Destructor
	~Suspect();
	//Accessor Functions
	string getSuspect();
	string getRole();
    string getAlibi();
	bool getIfMurder();
	//Mutator Functions
private:
	//Variables
	string suspectName;
	string suspectRole;
    string suspectAlibi;
    bool suspectMurderer;
};