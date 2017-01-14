#ifndef CASE_H
#define CASE_H

#include "Unite.h"

class Unite;
class Case
{
    public :
        Case(bool estEntite_);
        virtual ~Case();
        bool estVide();
        Case* getSuivant();
        Case* getPrecedent();
        virtual int recevoirDegats(int degats); //renvoie une éventuelle récompense pour la destruction.
    protected :
        Unite* sonUnite;
		Case* suivant;
		Case* precedent;
		bool estEntite;
    private :
};

#endif // CASE_H
