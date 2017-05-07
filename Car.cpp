#include "stdafx.h"
#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car()
{
	carBrand = "X";
	carModel = "X";

	goodOnAsphalt = 0;
	goodOnClay = 0;
	goodOnSnow = 0;

	steering = 0;
	engineDynamic = 0;
}

Car::Car(string br, string md, int as, int cl, int sn, int st, int ed)
{
	carBrand = br;
	carModel = md;
	goodOnAsphalt = as;
	goodOnClay = cl;
	goodOnSnow = sn;
	steering = st;
	engineDynamic = ed;
}

void Car::SetBrand(string br)
{
	carBrand = br;
}

void Car::SetModel(string md)
{
	carModel = md;
}

string Car::GetBrand() const
{
	return carBrand;
}

string Car::GetModel() const
{
	return carModel;
}

void Car::print() const
{
	cout << "Brand: " << carBrand << endl << "Model: " << carModel << endl;
	BestForSurface();
	BestForTrack();
}

void Car::BestForSurface() const
{
	if (goodOnAsphalt > goodOnClay && goodOnAsphalt > goodOnSnow)
	{
		cout << "Car is best on aspahlt!" << endl;
	}
	if (goodOnClay > goodOnAsphalt && goodOnClay > goodOnSnow)
	{
		cout << "Car is best on clay!" << endl;
	}
	if (goodOnSnow > goodOnAsphalt && goodOnSnow > goodOnClay)
	{
		cout << "Car is best on snow!" << endl;
	}
}

void Car::BestForTrack() const
{
	if (steering > engineDynamic)
	{
		cout << "Car is best for short track with many turns!" << endl;
	}
	if (engineDynamic > steering)
	{
		cout << "Car is best for straight track with less turns!" << endl;
	}
}