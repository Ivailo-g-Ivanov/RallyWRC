#include "stdafx.h"
#include <iostream>
#include <string>
#include "WorldRally.h"
using namespace std;



void WorldRally::addRaceToWRC(const Race& race)
{
	races[size++] = race;
}




void WorldRally::print() const
{
	for (int i = 0; i < size; i++)
	{
		races[i].print();
		cout << endl;
	}
}