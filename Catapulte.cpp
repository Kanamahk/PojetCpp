#include "Catapulte.h"

Catapulte::Catapulte(Case* position_, int faction_) : Unite(position, CaracteristiqueJeu::prixCatapulte(), 4, faction_, CaracteristiqueJeu::paCatapulte(), CaracteristiqueJeu::pvCatapulte())
{
    aAttaque = false;
}

Catapulte::~Catapulte()
{

}



int Catapulte::attaquer()
{
    int i
    int issue1 = 0issue2;
    Case* cible1, cible2;

    //On commence par la deuxkème case;
    if(faction == 1)
    {
        cible1 = position->getSuivant()->getSuivant();
        cible2 = cible1->getSuivant();
    }
    else if(faction == -1)
    {
        cible1 = position->getPrecedent()->getPrecedent();
        cible2 = cible1->getPrecedent();
    }

    //On se positionne sur l'entitée à toucher, ou à portée max si on n'en trouve pas.
    for(i=3; i<portee && !cible1->estEntite && cible1->estVide(); i++)
    {
        if(faction == 1 && cible2->getSuivant()!=null)
        {
            cible1 = cible1->getSuivant();
            cible2 = cible2->getSuivant();
        }

        else if(faction == -1 && cible2->getPrecedent() != null)
            cible1 = cible1->getPrecedent();
            cible2 = cible2->getPrecedent();
    }

    if(cible1->estVide() && !cible1->estEntite && cible2->estVide() && !cible2->estEntite)
        return -1; //Si on n'a personne sur qui tirer, on ne tire pas.

    if(!cible1->estVide())
    {
        issue1 = cible1->getSonUnite()->recevoirDegats(this.pa);
        if(issue1>0)
        {
            cible1->setSonUnite(null);
        }
    }

    else if(cible1->estEntite)
    {
        issue1 = cible1->recevoirDegats(this.pa);
    }

    if(!cible2->estVide())
    {
        issue2 = cible2->getSonUnite()->recevoirDegats(this.pa);
        if(issue2>0)
        {
            cible2->setSonUnite(null);
        }
    }
    else if(cible2->estEntite)
    {
        issue2 = cible2->recevoirDegats(this.pa);
    }

    return issue1 + issue2;

}

int Catapulte::action1()
{
    int issue == attaquer();
    if(issue != -1)
        aAttaque = true;
    return issue;
}

int Catapulte::action2()
{

}

int Catapulte::action3()
{
    if(aAttaque == true)
    {
        aAttaque = false;
        return -1;
    }
    else
    {
        aAttaque = false;
        return deplacer() ? 0 : -1;
    }
}
