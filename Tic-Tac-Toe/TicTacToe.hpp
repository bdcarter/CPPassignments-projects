/**********************************************************
 * Author:				Brianna Carter
 * Date Created:			2/21/15
 * Date Edited:				2/21/15
 *
 * This file contains the class delcaration for TicTacToe.
 * There is a Board object, a parameter for the first player,
 * and a play method that asks for player's move until
 * the game is over. 
 * *********************************************************/
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"
#include <string>
using namespace std;

class TicTacToe
{
	private:
		char turn;
		Board boardPlay;

	public:
		TicTacToe();
		TicTacToe(char);
		void Play(char);

};
#endif		
