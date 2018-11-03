#include "stdafx.h"
#include "Snake.h"
#include "Food.h"

#define BOARD_SIZE 20

class Board {

public:
	Board();
	void draw();

private:
	void clear();

	int board[BOARD_SIZE][BOARD_SIZE];
	Snake *snake;
	Food *food;

};