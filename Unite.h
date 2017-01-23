#ifndef UNITE_H
#define UNITE_H

#include "Entite.h"
#include "Case.h"
#include "Joueur.h"

using namespace std;

class Case;
class Joueur;
class Unite : virtual public Entite
{
    public :
        Unite(Case* position_, Joueur* monMaitre_, int prix_, int portee_, int faction_, int pa_, int pv_);
        virtual ~Unite();
        virtual bool deplacer(); //Peut être redéfinie : on peut imaginer une unité qui aurait un mouvemnt différent.
        virtual int attaquer(); //virtuelle, peut-être redefinie
        virtual int action1() = 0; //virtuelle pure : doit être redefinie
        virtual int action2() = 0;
        virtual int action3() = 0;
        int recevoirDegats(int degats);
        virtual string str() = 0;
        virtual void promouvoir();
    protected :
        Case* position;
        Joueur *monMaitre;
        int portee, pa, recompense;
    private :
};

#endif // UNITE_H
