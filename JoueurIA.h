/*
 * JoueurIA.h
 *
 *  Created on: 22 janv. 2017
 *      Author: Tristan
 */

#ifndef JOUEURIA_H_
#define JOUEURIA_H_

#include "Joueur.h"
#include "Catapulte.h"
#include "Archer.h"
#include "Fantassin.h"
#include "Chateau.h"

class JoueurIA : virtual public Joueur
{
public :
	JoueurIA(int faction_, Chateau* monChateau_);
	~JoueurIA();

	void acheter();
private :
};


#endif /* JOUEURIA_H_ */
