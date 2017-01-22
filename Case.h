#ifndef CASE_H
#define CASE_H

#include "Unite.h"
#include "CaracteristiquesJeu.h"

class Unite;
class Case
{
    public :
        Case(Case* suivant, Case* precedent);
        virtual ~Case();
        bool estVide();
        Case* getSuivant(int faction);
        Case* getPrecedent(int faction);
        void setSonUnite(Unite * u);
        Unite * getSonUnite();
        virtual int recevoirDegats(int degats); //renvoie une éventuelle récompense pour la destruction.
        virtual bool estFranchissable() = 0;
        virtual bool estEntite() = 0;
    protected :
        Unite* sonUnite;
		Case* suivant;
		Case* precedent;
		//bool estEntite;
    private :
		void setSuivant(Case * p);
};

#endif // CASE_H
