#include "Terrain.h"

Terrain::Terrain(Case* suivant, Case* precedent) : Case(suivant, precedent)
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

string Terrain::str()
{
	return "___";
}
