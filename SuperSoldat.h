#ifndef SUPERSOLDAT_H
#define SUPERSOLDAT_H

#include "CaracteristiquesJeu.h"
#include "Unite.h"

class SuperSoldat : virtual public Unite
{
    public:
        SuperSoldat(Case* position_, Joueur* monMaitre_, int faction_);
        int action1();
        int action2();
        int action3();
        virtual ~SuperSoldat();
        string str();
    protected:
    private:
};

#endif // SUPERSOLDAT_H
