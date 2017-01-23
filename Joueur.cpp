#include "Joueur.h"
#include "Chateau.h"

Joueur::Joueur(int faction_, Chateau* monChateau_) : faction(faction_), po(CaracteristiqueJeu::orPremierTour()), monChateau(monChateau_)
{
}

Joueur::~Joueur()
{
	for(int i = mesUnites.size()-1; i >= 0; i--)
	{
		delete mesUnites.at(i);
	}
}

Chateau* Joueur::getChateau()
{
	return monChateau;
}

void Joueur::actions1()
{
	int recompense;
	for(int i = mesUnites.size()-1; i >= 0; i--)
	{
		recompense = mesUnites.at(i)->action1();
		if(recompense < 0)
		{
			po += recompense;
			mesUnites.at(i)->promouvoir();
		}

	}
}

void Joueur::actions2()
{
	unsigned int recompense;
	for(unsigned int i = 0; i < mesUnites.size(); i++)
	{
		mesUnites.at(i)->action2();
		if(recompense < 0)
		{
			po += recompense;
			mesUnites.at(i)->promouvoir();
		}
	}
}

void Joueur::actions3()
{
	unsigned int recompense;
	for(unsigned int i = 0; i < mesUnites.size(); i++)
	{
		mesUnites.at(i)->action3();
		if(recompense < 0)
		{
			po += recompense;
			mesUnites.at(i)->promouvoir();
		}
	}
}

bool Joueur::aPerdu()
{
	return monChateau->estDetruit();
}

void Joueur::ajouterPo(int po_)
{
	po += po_;
}

int Joueur::getFaction()
{
	return faction;
}

void Joueur::ajouter(Unite* u)
{
	mesUnites.push_back(u);
}
