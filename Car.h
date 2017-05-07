#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
	int steering;
	int engineDynamic;
	
	int goodOnAsphalt;
	int goodOnClay;
	int goodOnSnow;
	
	string carBrand;
	string carModel;
	
public:
	Car();
	Car(string, string, int, int, int, int, int);

	
	void SetBrand(string);
	void SetModel(string);

	string GetBrand() const;
	string GetModel() const;

	
	void print() const;
	void BestForTrack() const;
	void BestForSurface() const;



};
