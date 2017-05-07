#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;


class Pilot
{
private:
	string name;
	string nationality;
	
	int goodOnAsphalt;
	int goodOnClay;
	int goodOnSnow;

	int goodOnTurns;
	int goodOnDrags;



public:
	Pilot();
	Pilot(string, string, int, int, int,int,int);
	void SetName(string);
	void SetNat(string);
	string GetName() const;
	string GetNat() const;

	void print() const;
	void BestForSurface() const;
	void BestForTrack() const;

	


};
