#include "stdafx.h"
#include "Board.h"
#include "Food.h"
#include "lib.h"
#include <iostream>

using namespace std;


Board::Board() {
	clear();
	snake = new Snake();
	food = new Food();
}

void Board::clear() {
	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			board[y][x] = 0;
		}
	}
}


void Board::draw() {
	/*for (int y = 0; y < BOARD_SIZE; y++) {
		for (int x = 0; x < BOARD_SIZE; x++) {
			setColor(RED);
			cout << "X";
		}
		cout << endl;
		setColor(WHITE);
	}*/
	gotoxy(food->x, food->y);
	setColor(GREEN);
	cout << (char)167;
	setColor(WHITE);
}