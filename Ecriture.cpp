/*
 * Ecriture.cpp
 *
 *  Created on: 20 janv. 2017
 *      Author: Tristan
 */

#include "Ecriture.h"


bool Ecriture::vider()
{
	string f = CaracteristiqueJeu::nomFichier();

	/*if(f == "")
	{
		cerr << "fichier non specifie !" << endl;
		return false; //to do : erreur
	}*/

	ofstream os(f, ios::out | ios::ate);  //d�claration du flux et ouverture du fichier
	if(os)  // si l'ouverture a r�ussi
	{
		os << "";
		os.close();  // on referme le fichier
		return true;
	}
	else  // sinon
	{
		cerr << "Erreur � l'ouverture !" << endl;
		return false;
	}
}

bool Ecriture::ecrire(string s)
{
	string f = CaracteristiqueJeu::nomFichier();

	/*if(f == "")
	{
		cerr << "fichier non specifie !" << endl;
		return false; //to do : erreur
	}*/

	ofstream os(f, ios::out | ios::app);  //d�claration du flux et ouverture du fichier
	if(os)  // si l'ouverture a r�ussi
	{
		os << s << endl;
		os.close();  // on referme le fichier
	}
	else  // sinon
	{
		cerr << "Erreur � l'ouverture !" << endl;
		return false;
	}

	cout << s << endl;
	return true;
}

/*
Ecriture & Ecriture::operator<<(Ecriture e, string s)
{
	if(Ecriture::fichier == "")
	{
		cerr << "fichier non specifie !" << endl;
		return e;
	}

	ofstream f(Ecriture::fichier, ios::out | ios::app);  //d�claration du flux et ouverture du fichier
	if(f)  // si l'ouverture a r�ussi
	{
		f << s << endl;
		f.close();  // on referme le fichier
	}
	else  // sinon
	{
		cerr << "Erreur � l'ouverture !" << endl;
		return e;
	}

	cout << s << endl;
	return e;
}
*/
