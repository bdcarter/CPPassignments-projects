/***********************************************
 * Author:			Brianna Carter
 * Date Created:		2/21/115
 * Date Modified:		2/21/15
 *
 * This file contains the function definitions 
 * for the TicTacToe class. This includes a 
 * function that starts the game.
 * This also has a main function that asks 
 * for the first player and begins the game.
 * *******************************************/

#include "Board.hpp"
#include "TicTacToe.hpp"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
const int ROW = 3;
TicTacToe::TicTacToe()
{
	//char player = 'X';
}

TicTacToe::TicTacToe(char playIn)
{
	char player = playIn;
	cout << player << endl;
}

void TicTacToe::Play(char player)

{
char x, y;
	while(boardPlay.gameState() == 4);
	{ cout << "Player " << player << " please choose a row." << endl;
	  cin >> x;
 	  cout << "Player " << player << " Please choose a column." << endl;
	  cin >> y;


		if(boardPlay.makeMove(x, y, player) == true)
		{	boardPlay.gameState();}

		while(boardPlay.makeMove(x,y,player) == false)
		{cout << "That space is unavailable" << endl;
		cout << "Player " << player << " please enter a row." << endl;
		cin >> x;
		cout << "Player " << player << " please enter a column." << endl;
		cin >> y;
		}

	
	//		boardPlay.print(boardPlay, ROW); 
		
	}

	if(boardPlay.gameState() == 1)
	{ cout << "Player X has won." << endl; }

	if(boardPlay.gameState() == 2)
	{ cout << "Player O has won." << endl;}

	if(boardPlay.gameState() == 3)
	{ cout << "The game was a draw." << endl;}
	
}
	

int main()
{
	TicTacToe game1;
	char playIn;
	Board boardPlay;

	cout << "Which player should go first: X or O?" << endl;
	cin >> playIn;

	game1.Play(playIn);
	
return 0;
}


