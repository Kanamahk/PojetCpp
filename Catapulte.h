#ifndef CATAPULTE_H
#define CATAPULTE_H

#include "CaracteristiquesJeu.h"
//#include "Unite.h"
#include "Joueur.h"
#include "Case.h"


class Joueur;
class Case;
class Catapulte : virtual public Unite
{
    public:
        Catapulte(Case* position_, Joueur* monMaitre_, int faction_);
        virtual ~Catapulte();
        int attaquer();
        int action1();
        int action2();
        int action3();
        string str();
    protected:
    private:
        bool aAttaque;
};

#endif // CATAPULTE_H
