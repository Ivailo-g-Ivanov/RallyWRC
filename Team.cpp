#include "stdafx.h"
#include <iostream>
#include <string>
#include "Team.h"
using namespace std;


Team::Team()
{
	teamName = "X";
}

Team::Team(string n)
{
	teamName = n;
}

void Team::setName(string n)
{
	teamName = n;
}

string Team::getName() const
{
	return teamName;
}

void Team::addPilot(const Pilot& pilot)
{
	pilots[size++] = pilot;
}

void Team::addCar(const Car& car)
{
	cars[0] = car;
}

void Team::print() const
{
	
	cout << "Team Name: " << teamName << endl << endl;
	for (int i = 0; i < size; ++i)
	{
		
		pilots[i].print();
		cout << endl;
	}
	cars[0].print();
	cout << endl;
}