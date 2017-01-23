#include "Archer.h"


Archer::Archer(Case* position_, Joueur* monMaitre_, int faction_) : Unite(position, monMaitre_, CaracteristiqueJeu::prixArcher(), 3, faction_, CaracteristiqueJeu::paArcher(), CaracteristiqueJeu::pvArcher())
{
    //ctor
}

Archer::~Archer()
{
    //dtor
}


int Archer::action1()
{
    return attaquer();
}

int Archer::action2()
{
   return deplacer() ? 0 : -1;
}

int Archer::action3()
{
    return -1;
}


string Archer::str()
{
	return "a";
}
