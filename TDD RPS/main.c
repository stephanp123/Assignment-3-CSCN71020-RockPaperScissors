#include <stdio.h>
#include <String.h>

#define MAXLEN 10
#define _CRT_SECURE_NO_WARNINGS


int main(void) {

	char playerOne[MAXLEN];

	char playerTwo[MAXLEN];


	printf("Player one's turn: (choose between rock, paper or scissors)\n");

	scanf_s("%s", playerOne, MAXLEN);

	if (strlen(playerOne) > MAXLEN) {

		fprintf(stderr, "\n\nERROR: Char not within range.\n\n");

		return 1;

	}
	else if (strcmp(playerOne, "rock") != 0 && strcmp(playerOne, "scissors") != 0 && strcmp(playerOne, "paper") != 0) {

		fprintf(stderr, "\n\nERROR: Not a char option.\n\n");

		return 1;

	}

	printf("Player two's turn: (choose between rock, paper or scissors)\n");

	scanf_s("%s", playerTwo, MAXLEN);


	if (strlen(playerTwo) > MAXLEN) {

		fprintf(stderr, "\n\nERROR: Char not within range.\n\n");

		return 1;

	}
	else if (strcmp(playerTwo, "rock") != 0 && strcmp(playerTwo, "scissors") != 0 && strcmp(playerTwo, "paper") != 0) {

		fprintf(stderr, "\n\nERROR: Not a char option.\n\n");

		return 1;

	}

	
	if (strcmp(playerOne, playerTwo) == 0) {

		printf("\n\nDRAW!\n\n");

		return 0;

	}
	else if (

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