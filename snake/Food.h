#include "Point.h"
#ifndef __FOOD_H
#define __FOOD_H

class Food : public Point {
public:
	Food();

private:
	void setRandomLocation();
};

#endif