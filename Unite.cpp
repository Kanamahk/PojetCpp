#include "Unite.h"

Unite::Unite(Case *position_, int prix_, int portee_, int faction_, int pa_, int pv_) : Entite(/*pv_, faction_*/), position(position_),  portee(portee_), pa(pa_), recompense(prix_/2)
{
    pv = pv_;
    faction = faction_;
}

Unite::~Unite()
{
    //dtor
}

/*
bool Unite::deplacer()
{
    if(faction == 1)
    {
        if(position->getSuivant()->estFranchissable && position->getSuivant()->estVide())
        {
            position->setSonUnite(null);
            position = position->getSuivant();
            position->setSonUnite(this);
            return true;
        }
        else
            return false;
    }
    else if(faction == -1)
    {
        if(position->getPrecedent()->estFranchissable && position->getPrecedent()->estVide()
        {
            position->setSonUnite(null);
            position = position->getPrecedent();
            position->setSonUnite(this);
            return true;
        }
        else
            return false;
    }
}


int Unite::attaquer()
{
    int i, issue;
    Case* cible;

    if(faction == 1)
        cible = position->getSuivant();
    else if(faction == -1)
        cible = position->getPrecedent();

    for(i=1; i<portee && cible != null && !cible->estEntite && cible->estVide(); i++)
    {
        if(faction == 1)
            cible = position->getSuivant();
        else if(faction == -1)
            cible = position->getPrecedent();
    }

    if(cible == null)
    {
        return -1;
    }
    else if(!cible->estVide())
    {
        issue = cible->getSonUnite()->recevoirDegats(this.pa);
        if(issue>0)
        {
            cible->setSonUnite(null);
        }
        return issue;
    }
    else if(cible->estEntite)
    {
        return cible->recevoirDegats(this.pa);
    }

}

int Unite::recevoirDegats(int degats)
{
    pv -= degats;
    if(pv<=0){
        return recompense;
    }
    else
    {
        return 0;
	}
}
*/

