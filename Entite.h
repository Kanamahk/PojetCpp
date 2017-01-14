/*
 * Entite.h
 *
 *  Created on: 10 janv. 2017
 *      Author: Tristan
 */

#ifndef ENTITE_H_
#define ENTITE_H_


class Entite
{
public :
	Entite(/*int pv_, int faction_*/);
	virtual ~Entite();
protected :
	int pv, faction;
private :
};


#endif /* ENTITE_H_ */
