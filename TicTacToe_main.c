/*
 * Eric Gallager
 * George Washington University
 *
 * Assignment:
 * We want you to make a Program that will allow two people to play Tic Tac Toe.
 * You might recall that Tic Tac Toe is a game that is played on a 3x3 board.
 * There are two players; X, who places Xs on the board, and O, who places Os on the board.
 * They take turns, and the winner is the one who can place three of their symbols in a row.
 * You only need to worry about the case where two people are playing Tic Tac Toe against each other, not in the case where the computer attempts to play Tic Tac Toe against a person.
 *
 * Some hints:
 * The board can be represented as a two dimensional array. (with code like char board[3][3]; or similar).
 *
 * If X chooses a square, then O cannot choose it and vice versa.
 *
 * If X chooses a square than X cannot choose the same square on a subsequent turn.
 *
 * If a player has won, then they will have their symbols in every row in a column, every column in a row, or on a diagonal.
 * Assuming the first subscript is x, and the second subscript is y then the board
 * _XO
 * _XO
 * _X_
 *
 * is a win for x, because board[1][0] == board[1][1] == board[1][2] and board[1][0] == X.
 *
 * Try to write functions for everything, breaking the task into individual functions (To draw the board on the screen, to take in input, to check for a winner, etc) will make the program easier to write.
 *
 * ---
 *
 * Algorithm:
 * 1. Display empty board (display_board() function)
 * 2. Prompt player 1 for input (input() function)
 *	2a. Display a prompt asking for a column and a row. (the options are 1, 2, and 3 for each)
 * 3. Get player 1's input (input() function)
 *	3b. Get numbers corresponding to column and row of the board
 * 4. Put player 1's input into the board array (input() function)
 *	4a. Check to see if the spot chosen by column and row number is already filled
 *		4aI.	If the spot is filled, display an error message and prompt the player to choose another spot
 *		4aII.	If the spot is empty, put a symbol corresponding to the player who chose it into that spot
 * 5. Re-draw the board in its new position (display_board() function)
 *	5a. Put an X in each spot claimed by player 1
 *	5b. Put an O in each spot claimed by player 2
 * 6. Repeat steps 2-5 for player 2 (main() function)
 * 7. Repeat steps 2-6 until a player wins (main() function)
 * 8. Check to see if a player has won (winner() function)
 * 9. If a player has three in a row, display a message telling them that they have won. (winner() function)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h> // Might have an easier way to display the game board in it

int display_board(void); // Prototype
int display_board(void) // Placeholder for display_board() function until I decide exactly how I'm going to do it
{
	int i = 0; // Initialize loop-counter
	if (i = 0)
	{
		printf("\n i = %i \n", i); // Statement for debugging
	} else {
		printf("\n i = %i \n", i); // Statement for debugging
	}
	printf("\n Placeholder for display_board() function \n");
	return 0;
}
int input(void); // Prototype
int input(void) // Placeholder for input() function until I decide exactly how I'm going to do it
{
	int i = 0; // Initialize loop-counter
	if (i = 0)
	{
		printf("\n i = %i \n", i); // Statement for debugging
	} else {
		printf("\n i = %i \n", i); // Statement for debugging
	}
	printf("\n Placeholder for input() function \n");
	return 0;
}
int winner(void); // Prototype
int winner(void) // Placeholder for winner() function until I decide exactly how I'm going to do it
{
	int i = 0; // Initialize loop-counter
	if (i = 0)
	{
		printf("\n i = %i \n", i); // Statement for debugging
	} else {
		printf("\n i = %i \n", i); // Statement for debugging
	}
	printf("\n Placeholder for winner() function \n");
	return 0;
}

int main (int argc, const char * argv[]) { // Template for arguments for main()
	printf("\n argc is %i \n", argc); // Statement for debugging
	printf("\n First character of argv[0] is %c \n", *argv[0]); // Statement for debugging (Warning: %c can only display one character at a time. I'd use %s but that causes errors.)
	char board[3][3] = {{'0', '0', '0'}, {'0', '0', '0'}, {'0', '0', '0'}}; // declare board per homework assignment
	int i = 0; // initialize loop counter
	int j = 0; // initialize loop counter
    // insert code here...
    for (i = 0; i < 3; i++) // Go through each row
	{
		for (j = 0; j < 3; j++) // Go through each column
		{
			printf("\n board[%i][%i] = %c \n", i, j, board[i][j]); // Statement for debugging
		}
	}
	int won = 0; // Initialize win condition flag
	printf("\n won = %i \n", won); // Statement for debugging
	while (won != 1) // Continue the game until a player wins
	{
		display_board(); // Show initial position of board (empty)
		input(); // Start game
		display_board(); // Update board
		winner(); // Check for winner
		won = 1; // Placeholder until the winner() function actually works
		printf("\n won = %i \n", won); // Statement for debugging
	}
    return 0;
}

// newline \n

