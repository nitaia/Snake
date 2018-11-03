#include "stdafx.h"
#include "Snake.h"
#include "lib.h"
#include <iostream>

using namespace std;


Snake::Snake() {
	location.x = 0;
	location.y = 0;
}


void Snake::crowl() {
	location.x++;
}

Point Snake::where() {
	return location;
}