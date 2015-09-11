/*******************************************************
 * 			Board.hpp
 * Author:				Brianna Carter
 * Date Created:			2/18/15
 * Date Modified:			2/18/15
 *
 * This file contains the class Board. it has a 3x3
 * array and a default constructor that initializes
 * it to empty. It uses a method called makeMove
 * that takes x and y coordinates as parameters.
 * There is a method called gameState that returns
 * the state of the game and a method called print
 * that prints the board to the screen. 
 * ************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>
using namespace std;

enum State {X = 1, O, Draw, Current};

class Board
{

	private:
		char player;
		char board1[3][3];

	public:
		Board();
//		Board::Board(string board[3][3]); 
		bool makeMove(int, int, char);
		State gameState();
		void print(char board1[][3], const int);
};
#endif
