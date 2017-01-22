/*
 * CaracteristiquesJeu.h
 *
 *  Created on: 6 janv. 2017
 *      Author: Tristan
 */

#ifndef CARACTERISTIQUESJEU_H_
#define CARACTERISTIQUESJEU_H_

#include "Configuration.h"

using namespace std;

class CaracteristiqueJeu
{
public :
	static void load(string nomFichier);
	static int tailleAireDeJeu();
	static int nbMaxTour();
	static int orPremierTour();
	static int orParTour();
	static int prixFantassin();
	static int prixArcher();
	static int prixCatapulte();
	static int pvChateau();
	static int pvFantassin();
	static int pvArcher();
	static int pvCatapulte();
	static int paFantassin();
	static int paArcher();
	static int paCatapulte();
	static string nomFichier();

	const static int FACTIONA = 1;
	const static int FACTIONB = -1;

protected :
private :
	static int taj, nmt, oft, opt, pf, pa, pc, pvf, pvC, pva, pvc, paf, paa, pac;
	static bool probleme;
	static string nf;
};

inline bool estStrictementEntre(int min, int max, int n)
{
	if(n <= min)
		return false;
	if(n >= max)
		return false;

	return true;
}

#endif /* CARACTERISTIQUESJEU_H_ */
