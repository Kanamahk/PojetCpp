#include "Case.h"

Case::Case(Case* suivant_, Case* precedent_) : sonUnite(nullptr), suivant(suivant_), precedent(precedent_)/*, estEntite(estEntite_)*/
{
	precedent->setSuivant(this);
}

Case::~Case()
{
    //dtor
}

void Case::setSuivant(Case * p)
{
	suivant = p;
}

bool Case::estVide()
{
	return (sonUnite != nullptr);
}

Case* Case::getSuivant(int faction)
{
	if(faction == CaracteristiqueJeu::FACTIONA)
		return suivant;
	if(faction == CaracteristiqueJeu::FACTIONB)
		return precedent;
	return nullptr;
}

Case* Case::getPrecedent(int faction)
{
	if(faction == CaracteristiqueJeu::FACTIONA)
		return precedent;
	if(faction == CaracteristiqueJeu::FACTIONB)
		return suivant;
	return nullptr;
}

void Case::setSonUnite(Unite * u)
{
	sonUnite = u;
}

Unite * Case::getSonUnite()
{
	return sonUnite;
}

int Case::recevoirDegats(int degats)
{
	return 0;
}
