// snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include "lib.h"
#include "Board.h"

int main()
{
	srand(time(NULL));
	Board* b = new Board();
	b->draw();
	getch();

    return 0;
}

