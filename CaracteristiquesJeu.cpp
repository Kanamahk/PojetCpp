/*
 * CaracteristiquesJeu.cpp
 *
 *  Created on: 6 janv. 2017
 *      Author: Tristan
 */

#include "CaracteristiquesJeu.h"

bool CaracteristiqueJeu::probleme = true;
int CaracteristiqueJeu::taj, CaracteristiqueJeu::nmt, CaracteristiqueJeu::oft, CaracteristiqueJeu::opt, CaracteristiqueJeu::pf, CaracteristiqueJeu::pa, CaracteristiqueJeu::pc,  CaracteristiqueJeu::pvC, CaracteristiqueJeu::pvf, CaracteristiqueJeu::pva, CaracteristiqueJeu::pvc, CaracteristiqueJeu::paf, CaracteristiqueJeu::paa, CaracteristiqueJeu::pac;
string CaracteristiqueJeu::nf;


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
		config.Get("pvChateau", CaracteristiqueJeu::pvC)		&&
		config.Get("pvFantassin", CaracteristiqueJeu::pvf)		&&
		config.Get("pvArcher", CaracteristiqueJeu::pva)			&&
		config.Get("pvCatapulte", CaracteristiqueJeu::pvc)		&&
		config.Get("paFantassin", CaracteristiqueJeu::paf)		&&
		config.Get("paArcher", CaracteristiqueJeu::paa)			&&
		config.Get("paCatapulte", CaracteristiqueJeu::pac)		&&
		config.Get("nomFichier", CaracteristiqueJeu::nf)		)
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


string CaracteristiqueJeu::nomFichier()
{
	if(probleme)
		return "deroulement_partie.txt";
	return nf;
}

int CaracteristiqueJeu::tailleAireDeJeu()
{
	if(probleme || !estStrictementEntre(5, 50, taj))
		return 12;
	return taj;
}

int CaracteristiqueJeu::nbMaxTour()
{
	if(probleme || !estStrictementEntre(0, 10000, nmt))
		return 100;
	return nmt;
}

int CaracteristiqueJeu::orPremierTour()
{
	if(probleme || !estStrictementEntre(-1, 100, oft))
		return 4;
	return oft;
}

int CaracteristiqueJeu::orParTour()
{
	if(probleme || !estStrictementEntre(0, 100, opt))
		return 8;
	return opt;
}

int CaracteristiqueJeu::prixFantassin()
{
	if(probleme || !estStrictementEntre(0, 50, pf))
		return 10;
	return pf;
}

int CaracteristiqueJeu::prixArcher()
{
	if(probleme || !estStrictementEntre(0, 70, pa))
		return 12;
	return pa;
}

int CaracteristiqueJeu::prixCatapulte()
{
	if(probleme || !estStrictementEntre(0, 100, pc))
		return 20;
	return pc;
}

int CaracteristiqueJeu::pvChateau()
{
	if(probleme || !estStrictementEntre(0, 500, pvC))
		return 100;
	return pvC;
}

int CaracteristiqueJeu::pvFantassin()
{
	if(probleme || !estStrictementEntre(0, 50, pvf))
		return 10;
	return pvf;
}

int CaracteristiqueJeu::pvArcher()
{
	if(probleme || !estStrictementEntre(0, 40, pva))
		return 8;
	return pva;
}

int CaracteristiqueJeu::pvCatapulte()
{
	if(probleme || !estStrictementEntre(0, 70, pvc))
		return 12;
	return pvc;
}

int CaracteristiqueJeu::paFantassin()
{
	if(probleme || !estStrictementEntre(0, 20, paf))
		return 4;
	return paf;
}

int CaracteristiqueJeu::paArcher()
{
	if(probleme || !estStrictementEntre(0, 15, paa))
		return 3;
	return paa;
}

int CaracteristiqueJeu::paCatapulte()
{
	if(probleme || !estStrictementEntre(0, 30, pac))
		return 6;
	return pac;
}
