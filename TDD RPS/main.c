#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <String.h>
#include <stdbool.h>
#include "main.h"

#define MAXLEN 10


char* RPSoption(char* playerOne, char* playerTwo) {

	if (strcmp(playerOne, playerTwo) == 0) {

		printf("\n\nDRAW!\n\n");

	} else if (

			(strcmp(playerOne, "rock") == 0 && strcmp(playerTwo, "scissors") == 0) ||
			(strcmp(playerOne, "paper") == 0 && strcmp(playerTwo, "rock") == 0) ||
			(strcmp(playerOne, "scissors") == 0 && strcmp(playerTwo, "paper") == 0)

			) {

			printf("\n\nPLAYER 1 WINS!\n\n");

		}
		else {

		printf("\n\nPLAYER 2 WINS!\n\n");

		}

	return 0;

}

int main(void) {

	char playerOne[MAXLEN];

	char playerTwo[MAXLEN];


	printf("Player one's turn: (choose between rock, paper or scissors)\n");

	scanf_s("%s", playerOne, MAXLEN);

	if (strcmp(playerOne, "rock") != 0 && strcmp(playerOne, "scissors") != 0 && strcmp(playerOne, "paper") != 0) {

		fprintf(stderr, "\n\nERROR: Not a valid option.\n\n");

		return 1;

	}

	printf("Player two's turn: (choose between rock, paper or scissors)\n");

	scanf_s("%s", playerTwo, MAXLEN);
	
	if (strcmp(playerTwo, "rock") != 0 && strcmp(playerTwo, "scissors") != 0 && strcmp(playerTwo, "paper") != 0) {

		fprintf(stderr, "\n\nERROR: Not a valid option.\n\n");

		return 1;

	}
	

	RPSoption(playerOne, playerTwo);

	return 0;

}