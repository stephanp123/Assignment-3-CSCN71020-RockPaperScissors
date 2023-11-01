#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <String.h>
#include <stdbool.h>
#include "main.h"

#define MAXLEN 10

// function determining draw and winner

char* RPSoption(char* playerOne, char* playerTwo) {

	if (strcmp(playerOne, playerTwo) == 0) { // if statement for draw 

		printf("\n\nDraw\n\n");

		return "Draw";

	} else if ( // if statement for all options

			(strcmp(playerOne, "rock") == 0 && strcmp(playerTwo, "scissors") == 0) ||
			(strcmp(playerOne, "paper") == 0 && strcmp(playerTwo, "rock") == 0) ||
			(strcmp(playerOne, "scissors") == 0 && strcmp(playerTwo, "paper") == 0)
		
		) {

			printf("\n\nPlayer1\n\n");

			return "Player1";

		}
		else {

			printf("\n\nPlayer2\n\n");

			return "Player2";

		}

	return 0;

}

char* inputErrP1(char* playerOne) { // error checking for invalid input function 1

	if (strcmp(playerOne, "rock") != 0 && strcmp(playerOne, "scissors") != 0 && strcmp(playerOne, "paper") != 0) {

		fprintf(stderr, "\n\nInvalid\n\n");

		return "Invalid";

	}

	return 0;

}

char* inputErrP2(char* playerTwo) { // error checking for invalid input function 2

	if (strcmp(playerTwo, "rock") != 0 && strcmp(playerTwo, "scissors") != 0 && strcmp(playerTwo, "paper") != 0) {

		fprintf(stderr, "\n\nInvalid\n\n");

		return "Invalid";

	}

	return 0;

}

int main(void) { // main function with print statments and above functions call

	char playerOne[MAXLEN];

	char playerTwo[MAXLEN];

	printf("Player one's turn: (choose between rock, paper or scissors)\n");

	scanf_s("%s", playerOne, MAXLEN);

	if (inputErrP1(playerOne) != 0) {

		exit(1);

	}

	printf("Player two's turn: (choose between rock, paper or scissors)\n");

	scanf_s("%s", playerTwo, MAXLEN);
	
	if (inputErrP1(playerTwo) != 0) {

		exit(1);

	}
	
	RPSoption(playerOne, playerTwo);

	return 0;

}