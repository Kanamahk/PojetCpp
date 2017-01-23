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
	virtual int recevoirDegats(int degats) = 0;
	int getPv();
	int getFaction();
protected :
	int pv, faction;
private :
};


#endif /* ENTITE_H_ */
