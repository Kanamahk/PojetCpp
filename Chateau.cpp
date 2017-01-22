#include "Chateau.h"

Chateau::Chateau(int pv_, int faction_, Case* suivant, Case* precedent) : Case(Case* suivant, Case* precedent), Entite(/*pv_, faction_*/)
{
    pv = pv_;
    faction = faction_;
}

Chateau::~Chateau()
{
    //dtor
}


bool Chateau::estFranchissable()
{
	return false;
}

bool Chateau::estEntite()
{
	return true;
}

int Chateau::recevoirDegats(int degats)
{
	pv -= degats;
	if(pv<=0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
