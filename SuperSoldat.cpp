#include "SuperSoldat.h"

SuperSoldat::SuperSoldat(Case* position_, int faction_) : Unite(position, CaracteristiqueJeu::prixFantassin()/2, 3, faction_, CaracteristiqueJeu::paFantassin(), CaracteristiqueJeu::pvFantassin())
{
    //ctor
}

SuperSoldat::~SuperSoldat()
{
    //dtor
}

/*
int SuperSoldat::action1()
{
    return attaquer();
}

int SuperSoldat::action2()
{
    return deplacer() ? 0 : -1;
}


int SuperSoldat::action3()
{
    return attaquer();
}

*/
