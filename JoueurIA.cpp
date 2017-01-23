/*
 * JoueurIA.cpp
 *
 *  Created on: 22 janv. 2017
 *      Author: Tristan
 */

#include "JoueurIA.h"

JoueurIA::JoueurIA(int faction_, Chateau* monChateau_) : Joueur(faction_, monChateau_)
{

}

JoueurIA::~JoueurIA()
{

}

void JoueurIA::acheter()
{
	Ecriture e;
	stringstream ss;
	if(monChateau->estVide())
	{
		ss << "Avec " << po << " pieces d'or, je m'achete ";
		if(CaracteristiqueJeu::prixCatapulte() <= po)
		{
			Catapulte *c = new Catapulte(monChateau, this, faction);
			mesUnites.push_back(c);
			monChateau->setSonUnite(c);
			po -= CaracteristiqueJeu::prixCatapulte();
			ss<< "une catapulte.";
		}
		else if(CaracteristiqueJeu::prixArcher() <= po)
		{
			Archer *a = new Archer(monChateau, this, faction);
			mesUnites.push_back(a);
			monChateau->setSonUnite(a);
			po -= CaracteristiqueJeu::prixArcher();
			ss << "un archer.";
		}
		else if(CaracteristiqueJeu::prixFantassin() <= po)
		{
			Fantassin *f = new Fantassin(monChateau, this, faction);
			mesUnites.push_back(f);
			monChateau->setSonUnite(f);
			po -= CaracteristiqueJeu::prixFantassin();
			ss << "un fantassin.";
		}
		else
			ss << "rien du tout.";
	}
	else
		ss << "Mon chateau est plein.";

	ss << endl;
	e.ecrire(ss.str());
}
