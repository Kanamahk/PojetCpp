#include "Chateau.h"

Chateau::Chateau(int pv_, int faction_) : Case(true), Entite(/*pv_, faction_*/)
{
    pv = pv_;
    faction = faction_;
}

Chateau::~Chateau()
{
    //dtor
}


//Attention : ne retourne pas un booleen car est une généralisation de la fonction homonyme dans Entite
int recevoirDegats(int degats)
{
    pv -= degats;
    return pv > 0 ? 1 : 0; //retourne 1 si le chateau est detruit et 0 sinon.
}
