#pragma once
#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Race.h"
using namespace std;

struct WorldRally
{
private:
	string name = "WRC";
	Race races[15];
	int size = 0;
public:
	void print() const;
	void addRaceToWRC(const Race&);

	
};