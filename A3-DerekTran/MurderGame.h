/**************************************************
 Project: A3-DerekTran
 Lab Num: Assignment 3
 Author: Derek Tran
 Purpose: Main Header
**************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "Suspect.cpp"
#include "Item.cpp"
#include "Player.cpp"
#pragma once

using namespace std;
using std::vector;

#pragma once

string askForString(string question);

void displayDescription();
void displayTitle();
void displayRules();
void initialiseGame();
void playGame();
void gameOver();
void displayScore();
void resetGame();
void playerMovement(string userInput);


