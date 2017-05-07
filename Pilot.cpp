#include "stdafx.h"
#include <iostream>
#include "Pilot.h"
#include <string>
using namespace std;

Pilot::Pilot()
{
	name = "X";
	nationality = "X";
	
	goodOnAsphalt = 0;
	goodOnClay = 0;
	goodOnSnow = 0;

	goodOnTurns = 0;
	goodOnDrags = 0;
}

Pilot::Pilot(string n, string nat, int asph, int cl, int sn, int tr, int dr)
{
	name = n;
	nationality = nat;
	goodOnAsphalt = asph;
	goodOnClay = cl;
	goodOnSnow = sn;
	goodOnTurns = tr;
	goodOnDrags = dr;
}

 void Pilot::SetName(string n) 
{
	 name = n;
}

 void Pilot::SetNat(string nat)
 {
	 nationality = nat;
 }

 string Pilot::GetName() const
 {
	 return name;
 }

 string Pilot::GetNat() const
 {
	 return nationality;
 }

 void Pilot::print() const
 {
	 cout << "Name: " << name << endl;
	 cout << "Nationality: " << nationality << endl;
	 BestForSurface();
	 BestForTrack();
	 
 }

 void Pilot::BestForSurface() const
 {
	
	 if (goodOnAsphalt > goodOnClay && goodOnAsphalt > goodOnSnow)
	 {
		 cout << "Pilot is best on aspahlt!" << endl;
	 }
	 if (goodOnClay > goodOnAsphalt && goodOnClay > goodOnSnow)
	 {
		 cout << "Pilot is best on clay!" << endl;
	 }
	 if (goodOnSnow > goodOnAsphalt && goodOnSnow > goodOnClay)
	 {
		 cout << "Pilot is best on snow!" << endl;
	 }
	
 }

 void Pilot::BestForTrack() const
 {
	 if (goodOnTurns > goodOnDrags)
	 {
		 cout << "Pilot is best on track with many turns!" << endl;
	 }
	
	 if(goodOnDrags>goodOnTurns)
	 {
		 cout << "Pilot is best on track with less turns and more straights!" << endl;
	 }
 }