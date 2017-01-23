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
#include "Carte.h"
#include "Jeu.h"

int main()
{
	CaracteristiqueJeu cj;
	cj.load("./src/config.txt");
	Ecriture e;
	e.vider();

	Jeu j;

	bool gagnant = false;

	do
	{
		gagnant = j.tourDeJeu();
		j.tour ++;
		e.ecrire("\n\n");
	}while(!gagnant || j.tour > cj.nbMaxTour());

}
