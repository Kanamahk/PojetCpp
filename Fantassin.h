#ifndef FANTASSIN_H
#define FANTASSIN_H

#include "CaracteristiquesJeu.h"
#include "Unite.h"
#include "Joueur.h"
#include "Case.h"
#include "SuperSoldat.h"

class Joueur;
class Case;
class Fantassin : virtual public Unite
{
    public:
        Fantassin(Case *position_, Joueur* monMaitre_, int faction_);
        virtual ~Fantassin();
        int action1();
        int action2();
        int action3();
        string str();

        void promouvoir();
    protected:
    private:
        bool aAttaque;
};

#endif // FANTASSIN_H
