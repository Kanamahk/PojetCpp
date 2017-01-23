/*
 * Carte.h
 *
 *  Created on: 12 janv. 2017
 *      Author: Tristan
 */

#ifndef CARTE_H_
#define CARTE_H_

#include "Case.h"
#include "Chateau.h"
#include "Terrain.h"

class Carte
{
public :
	Carte();
	~Carte();
	string str(int faction);
protected :
private :
	Chateau *premier, *dernier;

	friend class Jeu;
};


#endif /* CARTE_H_ */
