/**************************************************
 Project: A3-DerekTran
 Lab Num: Assignment 3
 Author: Derek Tran
 Purpose: Player Class
**************************************************/

#include "Player.h"

//Instance Variables
//string playerName;
//vector<Item> playerInventory;
//int playerTurn;
//int playerScore;

//Constructors
Player::Player() {
	//playerName = "test";
}

Player::Player(string name) {
	playerName = name;
	playerTurn = 0;
	playerScore = 0;
}
