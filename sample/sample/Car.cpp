#include"Car.h"
#include<iostream>


void Car::setName(std::string ArgvName) 
{
	name = ArgvName;
}

void Car::toString()
{
	std::cout << "車の名前は" << this->name << "です。" << std::endl;
}