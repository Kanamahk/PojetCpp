/*
 * Carte.cpp
 *
 *  Created on: 13 janv. 2017
 *      Author: Tristan
 */

#include "Carte.h"

Carte::Carte()
{
	premier = new Chateau(CaracteristiqueJeu::pvChateau(), CaracteristiqueJeu::FACTIONA, nullptr, nullptr);
	Case * temp = premier;

	for(int i = 0; i < CaracteristiqueJeu::tailleAireDeJeu()-2; i++)
	{
		temp->setSuivant(new Terrain(nullptr, temp));
		temp = temp->getSuivant(1);
	}

	dernier = new Chateau(CaracteristiqueJeu::pvChateau(), CaracteristiqueJeu::FACTIONA, nullptr, temp);
	temp->setSuivant(dernier);

}


Carte::~Carte()
{
	Case * temp = dernier->getPrecedent(1);
	delete dernier;

	for(int i = 0; i < CaracteristiqueJeu::tailleAireDeJeu()-2; i++)
	{
		Case *temp2 = temp;
		temp = temp->getPrecedent(1);
		delete temp2;
	}

	delete premier;
}

string Carte::str(int faction)
{
	stringstream ss;
	Case * temp, *prem;

	if(faction == CaracteristiqueJeu::FACTIONA)
		prem = premier;
	else
		prem = dernier;

	temp = prem;
	ss << "|";
	for(int i = 0; i < CaracteristiqueJeu::tailleAireDeJeu(); i++)
	{
		if(temp->estEntite())
			ss << (temp == premier? "1:" : "2:");


		ss << temp->str() << "|";

		if(i < CaracteristiqueJeu::tailleAireDeJeu()-1)
			temp = temp->getSuivant(faction);
	}

	temp = prem;
	ss << "\n|";
	for(int i = 0; i < CaracteristiqueJeu::tailleAireDeJeu(); i++)
	{
		if(temp->estEntite())
		{
			if(temp == premier)
				ss << premier->getPv() << "|";
			if(temp == dernier)
				ss << dernier->getPv() << "|";
		}
		else
			ss <<  "___|";

		if(i < CaracteristiqueJeu::tailleAireDeJeu()-1)
			temp = temp->getSuivant(faction);
	}

	temp = prem;
	ss << "\n\n|";
	for(int i = 0; i < CaracteristiqueJeu::tailleAireDeJeu(); i++)
	{
		if(!temp->estVide())
			ss << (temp->getSonUnite()->getFaction() == CaracteristiqueJeu::FACTIONA? "1:" : "2:" ) << temp->getSonUnite()->str() << "|";
		else
			ss <<  "___|";

		if(i < CaracteristiqueJeu::tailleAireDeJeu()-1)
			temp = temp->getSuivant(faction);
	}

	ss << "\n|";
	temp = prem;
	for(int i = 0; i < CaracteristiqueJeu::tailleAireDeJeu(); i++)
	{
		if(!temp->estVide())
			ss << temp->getSonUnite()->getPv() << "|";
		else
			ss <<  "___|";

		if(i < CaracteristiqueJeu::tailleAireDeJeu()-1)
			temp = temp->getSuivant(faction);
	}

	return ss.str();
}
