#include "Catapulte.h"

Catapulte::Catapulte(Case* position_, int faction_) : Unite(position, CaracteristiqueJeu::prixCatapulte(), 4, faction_, CaracteristiqueJeu::paCatapulte(), CaracteristiqueJeu::pvCatapulte())
{
    //ctor
}

Catapulte::~Catapulte()
{
    //dtor
}


/*
int Catapulte::attaquer()
{
    //TODO
}

int Catapulte::action1()
{
    return attaquer();
}

int Catapulte::action2()
{
    return -1;
}

int Catapulte::action3()
{
    return deplacer() ? 0 : -1;
}*/
