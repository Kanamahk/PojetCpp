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
