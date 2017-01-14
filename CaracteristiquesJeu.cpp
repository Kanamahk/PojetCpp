/*
 * CaracteristiquesJeu.cpp
 *
 *  Created on: 6 janv. 2017
 *      Author: Tristan
 */

#include "CaracteristiquesJeu.h"

bool CaracteristiqueJeu::probleme = true;
int CaracteristiqueJeu::taj, CaracteristiqueJeu::nmt, CaracteristiqueJeu::oft, CaracteristiqueJeu::opt, CaracteristiqueJeu::pf, CaracteristiqueJeu::pa, CaracteristiqueJeu::pc, CaracteristiqueJeu::pvf, CaracteristiqueJeu::pva, CaracteristiqueJeu::pvc, CaracteristiqueJeu::paf, CaracteristiqueJeu::paa, CaracteristiqueJeu::pac;

void CaracteristiqueJeu::load(string nomFichier)
{
	Configuration config;
	config.Load(nomFichier);

	if (config.Get("tailleAireDeJeu", CaracteristiqueJeu::taj)	&&
		config.Get("nbMaxTour", CaracteristiqueJeu::nmt)		&&
		config.Get("orPremierTour", CaracteristiqueJeu::oft)	&&
		config.Get("orParTour",  CaracteristiqueJeu::opt)		&&
		config.Get("prixFantassin", CaracteristiqueJeu::pf)		&&
		config.Get("prixArcher", CaracteristiqueJeu::pa)		&&
		config.Get("prixCatapulte", CaracteristiqueJeu::pc)		&&
		config.Get("pvFantassin", CaracteristiqueJeu::pvf)		&&
		config.Get("pvArcher", CaracteristiqueJeu::pva)			&&
		config.Get("pvCatapulte", CaracteristiqueJeu::pvc)		&&
		config.Get("paFantassin", CaracteristiqueJeu::paf)		&&
		config.Get("paArcher", CaracteristiqueJeu::paa)			&&
		config.Get("paCatapulte", CaracteristiqueJeu::pac)		)
	{
		probleme = false;
		cout << "La configuration personalisee sera utilisee." << endl;
	}
	else
	{
		cout << "La configuration de base sera utilisee." << endl;
		probleme = true;
	}
}


int CaracteristiqueJeu::tailleAireDeJeu()
{
	if(probleme)
		return 12;
	return taj;
}

int CaracteristiqueJeu::nbMaxTour()
{
	if(probleme)
		return 100;
	return nmt;
}

int CaracteristiqueJeu::orPremierTour()
{
	if(probleme)
		return 4;
	return oft;
}

int CaracteristiqueJeu::orParTour()
{
	if(probleme)
		return 8;
	return opt;
}

int CaracteristiqueJeu::prixFantassin()
{
	if(probleme)
		return 10;
	return pf;
}

int CaracteristiqueJeu::prixArcher()
{
	if(probleme)
		return 12;
	return pa;
}

int CaracteristiqueJeu::prixCatapulte()
{
	if(probleme)
		return 20;
	return pc;
}

int CaracteristiqueJeu::pvFantassin()
{
	if(probleme)
		return 10;
	return pvf;
}

int CaracteristiqueJeu::pvArcher()
{
	if(probleme)
		return 8;
	return pva;
}

int CaracteristiqueJeu::pvCatapulte()
{
	if(probleme)
		return 12;
	return pvc;
}

int CaracteristiqueJeu::paFantassin()
{
	if(probleme)
		return 4;
	return paf;
}

int CaracteristiqueJeu::paArcher()
{
	if(probleme)
		return 3;
	return paa;
}

int CaracteristiqueJeu::paCatapulte()
{
	if(probleme)
		return 6;
	return pac;
}
