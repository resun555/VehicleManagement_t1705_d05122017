// VehicleManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Car * car = new Car(5., new Motor(0.1, 1000.));
	car->display();
	delete car;
    return 0;
}

