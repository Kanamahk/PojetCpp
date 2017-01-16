#include "Fantassin.h"


Fantassin::Fantassin(Case* position_, int faction_) : Unite(position_, CaracteristiqueJeu::prixFantassin(), 1, faction_, CaracteristiqueJeu::paFantassin(), CaracteristiqueJeu::pvFantassin())
{
    aAttaque = false;
}

Fantassin::~Fantassin()
{
    //dtor
}


int Fantassin::action1()
{
    int issue = attaquer();
    if(issue != -1) //L'unité a pas pu attaquer
    {
        aAttaque = true;
    }

    return issue;
}

int Fantassin::action2()
{
    return deplacer() ? 0 : -1;
}

int Fantassin::action3()
{
    if(aAttaque == true)
    {
        aAttaque = false;
        return -1;
    }
    else
    {
        int issue = attaquer();
        if (attaquer()==-1)
            return 0;
        else return issue;
    }
}

