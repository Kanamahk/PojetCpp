#ifndef CATAPULTE_H
#define CATAPULTE_H


#include "CaracteristiquesJeu.h"
#include "Unite.h"

class Catapulte : virtual public Unite
{
    public:
        Catapulte(Case* position_, int faction_);
        virtual ~Catapulte();
        int attaquer();
        int action1();
        int action2();
        int action3();
    protected:
    private:
        bool aAttaque;
};

#endif // CATAPULTE_H
