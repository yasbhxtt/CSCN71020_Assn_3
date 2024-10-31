//create test cases for rock paper scissors

//yashb - CSCN71020 - Fall 2024 - Assignment 3

#include <stdio.h>
#include "main.h"
#include <string.h>

const char* Game_OUTCOME(const char* player1, const char* player2) {

	//CHECK FOR INVALID INPUTS BEFORE TESTS
	//FOR FOURTH TEST - INVALID INPUTS

	if (	//Check for invalid inputs from player1
		(strcmp(player1, "Scissors") != 0 &&
			strcmp(player1, "Paper") != 0 &&
			strcmp(player1, "Rock") != 0)) {
		return "INVALID INPUT!";
	}

	if (	//Check for invalid inputs from player2
		(strcmp(player2, "Scissors") != 0 &&
			strcmp(player2, "Paper") != 0 &&
			strcmp(player2, "Rock") != 0)) {
		return "INVALID INPUT!";
	}

	//FOR FIRST TEST - Player 1 Wins

	if (	//if player 1 chooses paper and player 2 chooses rock
		(strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
		return "Player1";
	}
	
	if (	//if player 1 chooses rock and player 2 chooses scissors
		(strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)) {
		return "Player1";
	}

	if (	//if player 1 chooses scissors and player 2 chooses paper
		(strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
		return "Player1";
	}


	//FOR SECOND TEST - Player 2 wins

	if (	//if player 2 chooses paper and player 1 chooses rock
		(strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0)) {
		return "Player2";
	}

	if (	//if player 2 chooses rock and player 1 chooses scissors
		(strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0)) {
		return "Player2";
	}

	if (	//if player 2 chooses scissors and player 1 chooses paper
		(strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0)) {
		return "Player2";
	}

	//FOR THIRD TEST - DRAW

	if (	//if both players choose Paper
		(strcmp(player2, "Paper") == 0 && strcmp(player1, "Paper") == 0)) {
		return "DRAW!";
	}

	if (	//if both players choose Rock
		(strcmp(player2, "Rock") == 0 && strcmp(player1, "Rock") == 0)) {
		return "DRAW!";
	}

	if (	//if both players choose Scissors
		(strcmp(player2, "Scissors") == 0 && strcmp(player1, "Scissors") == 0)) {
		return "DRAW!";
	}



}
