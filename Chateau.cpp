#include "Chateau.h"

Chateau::Chateau(int pv_, int faction_, Case* suivant, Case* precedent) : Case(suivant, precedent), Entite(/*pv_, faction_*/)
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

bool Chateau::estDetruit()
{
	if(pv <= 0)
		return true;

	return false;
}

string Chateau::str()
{
	return "C";
}
