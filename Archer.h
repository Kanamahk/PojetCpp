#ifndef ARCHER_H
#define ARCHER_H

#include "CaracteristiquesJeu.h"
#include "Unite.h"
#include "Joueur.h"
#include "Case.h"

class Joueur;
class Case;
class Archer : virtual public Unite
{
    public:
        Archer(Case* position_, Joueur* monMaitre_, int faction_);
        virtual ~Archer();
        int action1();
        int action2();
        int action3();
        string str();
    protected:
    private:
        //int id;
};

#endif // ARCHER_H
