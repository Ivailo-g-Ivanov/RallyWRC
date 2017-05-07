#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Race
{
private:
	string rallyName;
	string rallyLocation;

	int lightTurns=0;
	int sharpTurns;

	int shortLIne;
	int medLine;
	int longLine;

	string Surface;
	
	

public:
	Race();
	Race(string, string, int, int, int, int, int,string);
	void print() const;
	void goodFor() const;
	int sumLines() const;
	int sumTurns() const;

};
