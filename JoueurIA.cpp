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
	if(monChateau->estVide())
	{
		if(CaracteristiqueJeu::prixCatapulte() >= po)
		{
			Catapulte *c = new Catapulte(monChateau, this, faction);
			mesUnites.push_back(c);
			monChateau->setSonUnite(c);
			po -= CaracteristiqueJeu::prixCatapulte();
		}
		else if(CaracteristiqueJeu::prixArcher() >= po)
		{
			Archer *a = new Archer(monChateau, this, faction);
			mesUnites.push_back(a);
			monChateau->setSonUnite(a);
			po -= CaracteristiqueJeu::prixArcher();
		}
		else if(CaracteristiqueJeu::prixFantassin() >= po)
		{
			Fantassin *f = new Fantassin(monChateau, this, faction);
			mesUnites.push_back(f);
			monChateau->setSonUnite(f);
			po -= CaracteristiqueJeu::prixFantassin();
		}
	}
}
