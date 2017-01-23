#include "Catapulte.h"

Catapulte::Catapulte(Case* position_, Joueur* monMaitre_, int faction_) : Unite(position, monMaitre_, CaracteristiqueJeu::prixCatapulte(), 4, faction_, CaracteristiqueJeu::paCatapulte(), CaracteristiqueJeu::pvCatapulte())
{
    aAttaque = false;
}

Catapulte::~Catapulte()
{
}


int Catapulte::attaquer()
{
    int i;
    int issue1 = 0, issue2 = 0;
    Case *cible1, *cible2;

    //On commence par la deuxkème case;
    cible1 = position->getSuivant(faction)->getSuivant(faction);
    cible2 = cible1->getSuivant(faction);

    //On se positionne sur l'entitée à toucher, ou à portée max si on n'en trouve pas.
    for(i=3; i<portee && !cible1->estEntite() && (cible1->estVide() || cible1->getSonUnite()->getFaction() == faction); i++)
    {
        if(cible2->getSuivant(faction)!=nullptr)
        {
        	cible1 = cible1->getSuivant(faction);
        	cible2 = cible2->getSuivant(faction);
        }
    }

    if((cible1->estVide() || cible1->getSonUnite()->getFaction() == faction) && !cible1->estEntite() && (cible2->estVide() || cible2->getSonUnite()->getFaction() == faction) && !cible2->estEntite())
        return -1; //Si on n'a aucun ennemi sur qui tirer, on ne tire pas.

    //On tir même si un allié s'y trouve (dans ce cas on touchera un ennemi dans la case suivante, sinon on aurait déjà return)
    if(!cible1->estVide())
    {
        issue1 = cible1->getSonUnite()->recevoirDegats(this->pa);
        if(issue1>0)
        {
            cible1->setSonUnite(nullptr);
        }
    }

    else if(cible1->estEntite())
    {
        issue1 = cible1->recevoirDegats(this->pa);
    }

    //On tir même si un allié si trouve (dans ce cas on a touché un ennemi dans la case précédente, sinon on aurait déjà return)
    if(!cible2->estVide())
    {
        issue2 = cible2->getSonUnite()->recevoirDegats(this->pa);
        if(issue2>0)
        {
            cible2->setSonUnite(nullptr);
        }
    }
    else if(cible2->estEntite())
    {
        issue2 = cible2->recevoirDegats(this->pa);
    }

    return issue1 + issue2;

}

int Catapulte::action1()
{
    int issue = attaquer();
    if(issue != -1)
        aAttaque = true;
    return issue;
}

int Catapulte::action2()
{
	return -1;
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

string Catapulte::str()
{
	return "c";
}
