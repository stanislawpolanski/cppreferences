#include "pch.h"
#include "Car.h"


Car::Car(int y)
{
	this->year = y;
}


Car::~Car()
{
}

int Car::getYear()
{
	return this->year;
}
