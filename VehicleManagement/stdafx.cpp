// stdafx.cpp : source file that includes just the standard includes
// VehicleManagement.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


Vehicle::Vehicle(double w) : weight(w)
{
	std::cout << "Constructor of class \"Vehicle\" is involked." << std::endl;
}


Vehicle::~Vehicle()
{
	std::cout << "Destructor of class \"Vehicle\" is involked." << std::endl;
}


Car::Car(double w, Motor * m) : Vehicle(w), motor(m)
{
	std::cout << "Constructor of class \"Car\" is involked." << std::endl;
}


Car::~Car()
{
	std::cout << "Destructor of class \"Car\" is involked." << std::endl;
	delete motor;
}


void Car::display()
{
	std::cout << weight << std::endl;
	motor->display();
}


Motor::Motor(double w, double p) : weight(w), power(p)
{
	std::cout << "Constructor of class \"Motor\" is involked." << std::endl;
}


Motor::~Motor()
{
	std::cout << "Destructor of class \"Motor\" is involked." << std::endl;
}


void Motor::display()
{
	std::cout << weight << std::endl;
	std::cout << power << std::endl;
}
