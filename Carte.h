/*
 * Carte.h
 *
 *  Created on: 12 janv. 2017
 *      Author: Tristan
 */

#ifndef CARTE_H_
#define CARTE_H_

#include "Case.h"

class Carte
{
public :
	Carte();
	~Carte();
protected :
private :
	Case *premier, *dernier;
};


#endif /* CARTE_H_ */
