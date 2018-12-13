#include "pch.h"
#include <iostream>

class Car
{
private:
	int engineVolume;
public:
	void setVolume(int volume)
	{
		this->engineVolume = volume;
	}

	int getVolume()
	{
		return this->engineVolume;
	}
};

int main()
{
	Car c1;

	c1.setVolume(1500);

	std::cout << c1.getVolume();

}