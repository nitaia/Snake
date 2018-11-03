#include "stdafx.h"
#include "Food.h"
#include "Board.h"
#include "lib.h"
#include <iostream>

using namespace std;


Food::Food() {
	setRandomLocation();
}

void Food::setRandomLocation() {
	x = rand() % BOARD_SIZE;
	y = rand() % BOARD_SIZE;
}
