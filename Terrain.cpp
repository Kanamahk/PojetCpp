#include "Terrain.h"

Terrain::Terrain(Case* suivant, Case* precedent) : Case(Case* suivant, Case* precedent)
{
    //ctor
}

Terrain::~Terrain()
{
    //dtor
}


bool Terrain::estFranchissable()
{
	return true;
}

bool Terrain::estEntite()
{
	return false;
}
