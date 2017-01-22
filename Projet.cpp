//============================================================================
// Name        : Projet.cpp
// Author      : Tristan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "CaracteristiquesJeu.h"
#include "Ecriture.h"
#include <sstream>

int main()
{
	CaracteristiqueJeu cj;
	//cj.load("./src/config.txt");

	//cout << CaracteristiqueJeu::FACTIONB << endl;

	Ecriture e;

	e.vider();

	stringstream ss;
	ss << CaracteristiqueJeu::pvChateau();

	string res;

	ss >> res;

	if(!e.ecrire(res))
	{
		cout << "pas marché" << endl;
	}


	//e.ecrire("test 2");
}
