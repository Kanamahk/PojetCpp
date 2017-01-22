#include "Unite.h"

Unite::Unite(Case *position_, int prix_, int portee_, int faction_, int pa_, int pv_) : Entite(pv_, faction_), position(position_),  portee(portee_), pa(pa_), recompense(prix_/2)
{

}

Unite::~Unite()
{

}

/** D�place l'unit� sur la case adjacente, le sens d�pendant de sa faction.
*/
bool Unite::deplacer()
{
   /* if(faction == CaracteristiqueJeu::FACTIONA)
    {*/
	Case * suivant = position->getSuivant(faction);

	if(suivant->estFranchissable() && suivant->estVide())
	{
		position->setSonUnite(nullptr);
		position = suivant;
		position->setSonUnite(this);
		return true;
	}
	else
		return false;
   /* }*/
    /*else if(faction == CaracteristiqueJeu::FACTIONB)
    {
        if(position->getPrecedent()->estFranchissable && position->getPrecedent()->estVide())
        {
            position->setSonUnite(nullptr);
            position = position->getPrecedent();
            position->setSonUnite(this);
            return true;
        }
        else
            return false;
    }*/

    return false;
}


/** Inflige des d�g�ts � l'entit� la plus proche
* Ca peut �tre un batiment (chateau) ou une unit�
* Renvoie l'issue : -1 si l'attaque n'a pas eu lieu, la r�compense de la cible si elle est tu�e, et 0 sinon.
*/
int Unite::attaquer()
{
    int i, issue;
    Case* cible;


    cible = position->getSuivant(faction);
    /*if(faction == 1)
        cible = position->getSuivant(faction);
    else if(faction == -1)
        cible = position->getPrecedent();*/

    //On se positionne sur l'entit�e � toucher, ou � port�e max si on n'en trouve pas.
    for(i=1; i<portee && !cible->estEntite() && cible->estVide(); i++)
    {
        /*if(faction == 1)
            cible = cible->getSuivant();
        else if(faction == -1)
            cible = cible->getPrecedent();*/
    	cible = cible->getSuivant(faction);
        if(cible==nullptr) //Si on arrive hors de la map, on retourne -1 (mais �a ne devrait pas arriver)
            return -1;
    }

    if(!cible->estVide())
    {
        issue = cible->getSonUnite()->recevoirDegats(this->pa);
        if(issue>0)
        {
            cible->setSonUnite(nullptr);
        }
        return issue;
    }
    else if(cible->estEntite())
    {
        return cible->recevoirDegats(this->pa);
    }
    else
    	return -1;

}

int Unite::recevoirDegats(int degats)
{
    pv -= degats;
    if(pv<=0)
    {
        position->setSonUnite(nullptr);
        return recompense;
    }
    else
    {
        return 0;
	}
}


