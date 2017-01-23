/*
 * Entite.cpp
 *
 *  Created on: 10 janv. 2017
 *      Author: Tristan
 */

#include "Entite.h"

Entite::Entite(/*int pv_, int faction_*/) : pv(0), faction(0)
{
}

Entite::~Entite()
{

}

int Entite::getPv()
{
	return pv;
}


int Entite::getFaction()
{
	return faction;
}
