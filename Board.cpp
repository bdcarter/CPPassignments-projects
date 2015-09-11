/*************************************************
 * 		Board.cpp
 * Author:			Brianna Carter
 * Date Created:		2/18/15
 * Date Modified:		2/18/15
 *
 * This file contains the method definitions for 
 * the Board class.
 * **********************************************/

#include "Board.hpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
const int ROW = 3;
const int COLUMN = 3;
char empty = '.';

Board::Board()
{	char boardPlay[][3] = { "." ,"." ,".",".",".",".",".",".","."};

bool Board::makeMove(int x, int y, char player)
{

	if(boardPlay[x][y] == empty)
	{boardPlay[x][y] = player;
	return true;}

	else
	{
	return false;
	}

	if ((player == 'X') || (player == 'x'))	
	{player = 'O';}

	if((player == 'O') || (player == 'o'))
	{player = 'X';}
}

State Board::gameState()
{
State state1;
	switch (state1)
{
	if(board1[0][0] == board1[0][1] && board1[0][1] == board1[0][2])
		{ 	state1 = X;
			 cout << "Player X has won." << endl;
			return state1;
			break;
					 
			state1 = O;
			 cout << "Player O has won." << endl;
			return state1;
			break;
			}
	

	else if(board1[1][0] == board1[1][1] && board1[1][1] == board1[1][2])
		
			{
			state1 = X;
			cout << "Player X has won." << endl;
			return state1;
			break;
			
			state1 = O;
			 cout << "Player O has won." << endl;
			return state1;
			break;
			}
		

	else if(board1[2][0] == board1[2][1] && board1[2][1] == board1[2][2])
		
			{
			state1 = X;
			 cout << "Player X has won." << endl;
			return state1;
			
			state1 = O;
			 cout << "Player O has won." << endl;
			return state1;
			
			}
		

	else if(board1[0][0] == board1[1][0] && board1[1][0] == board1[2][0])
	
			{
			state1 = X;
			cout << "Player X has won." << endl;
			return state1;
			break;

			state1 = O;
			cout << "Player O has won." << endl;
			return state1;
			break;			
			}
		

	else if(board1[0][1] == board1[1][1] && board1[1][1] == board1[2][1])
	
		{
		state1 = X;
		 cout << "Player X has won." << endl;
		return state1;
		break;
	
		state1 = O;
		cout << "Player O has won." << endl;
		return state1;
		break;
		}
	

	else if(board1[0][2] == board1[1][2] && board1[1][2] == board1[2][2])
	
		{
		state1 = X;
		cout << "Player X has won." << endl;
		return state1;
		break;

		state1 = O;
		cout << "Player O has won." << endl;
		return state1;
		break;
		}
	

	else if(board1[0][0] == board1[1][1] && board1[1][1] == board1[2][2])
	
		{
		state1 = X;
		 cout <<"Player X has won." << endl;
		return state1;
		break;
		
		state1 = O;
		 cout << "Player O has won." << endl;
		return state1;
		break;
		}
	

	else if(board1[0][2] == board1[1][1] && board1[1][1] == board1[2][0])
	
		{
		state1 = X;
		 cout << "Player X has won." << endl;
		return state1;
		break;
		
		state1 = O;
		 cout << "Player O has won." << endl;
		return state1;
		break;
		}
	
	else 
	{	for(int row = 0; row < 3; row++)
		{ for(int column = 0; column < 3; column++)
			{if(board1[row][column] == '.')
				{state1 = Current;
				return  state1; }
			
			else
				{state1 = Draw;
				return state1;}
			}
		}
	} 
}
}	
void Board::print(char board1[][3], const int ROW)
{

	for(int row = 0; row < 3; row++)
	{ for(int column = 0; column < 3; column++)
		{cout << board1[row][column] << setw(3);}
	cout << endl;
	}
}

