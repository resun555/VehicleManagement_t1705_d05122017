// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here

#include <iostream>

class Vehicle
{
public:
	Vehicle(double = 1.);
	~Vehicle();

protected:
	double weight;

};

class Motor
{
public:
	Motor(double = 1., double = 1.);
	~Motor();
	void display();

private:
	double weight;
	double power;

};

class Car : public Vehicle
{
public:
	Car(double = 1., Motor * = new Motor());
	~Car();
	void display();

private:
	Motor * motor;

};
