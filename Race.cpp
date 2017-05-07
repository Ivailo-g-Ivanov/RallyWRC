#include "stdafx.h"
#include <iostream>
#include <string>
#include "Race.h"
using namespace std;


Race::Race()
{
	rallyName = "X";
	rallyLocation = "X";
	
	lightTurns = 0;
	sharpTurns = 0;

	shortLIne = 0;
	medLine = 0;
	longLine = 0;

	

	string Surface = "X";
}


Race::Race(string rn,string rl, int lt, int st, int sl, int ml, int ll, string sr)
{
	rallyName = rn;
	rallyLocation = rl;
	
	lightTurns = lt;
	sharpTurns = st;

	shortLIne = sl;
	medLine = ml;
	longLine = ll;

	Surface = sr;
}

int Race::sumLines() const
{
	int totalLines = 0;
	totalLines = shortLIne + medLine + longLine;
	return totalLines;
	
}

int Race::sumTurns() const
{
	int totalTurns = 0;
	totalTurns = lightTurns + sharpTurns;
	return totalTurns;
}


void Race::print() const
{
	cout << "Rally " << rallyName << " is located in " << rallyLocation << " ." << endl;
	cout << "THe surface is: " << Surface << endl;
	cout << "The race has " << sumTurns() << " turns and " << sumLines() << " straights." << endl;
	
	goodFor();
}



void Race::goodFor() const
{
	if (sumTurns() > sumLines())
	{
		
		cout << "THe race is good for cars with good steering!" << endl;
	}
	if(sumLines()>sumTurns())
	{
		cout << "The race is good for cars with good engine dynamic!" << endl;
	}
}