#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Pilot.h"
#include "Car.h"
using namespace std;

class Team
{
private:
	
	string teamName;
	Pilot pilots[2];
	Car cars[1];
	int size =0;
	
	
public:
	Team();
	Team(string);
	void setName(string);
	string getName() const;
	void print() const;
	void addPilot(const Pilot&);
	void addCar(const Car&);

	
};
